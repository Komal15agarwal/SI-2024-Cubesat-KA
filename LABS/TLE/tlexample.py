from skyfield.api import EarthSatellite, load
from datetime import datetime
import time

# TLE data for TIANQI-23
line1 = "1 57794U 23135C   24191.17867052  .00000153  00000-0  13906-3 0  9990"
line2 = "2 57794  49.9722 250.0486 0014476 308.5089  51.4524 14.22335697 43827"

# Load TLE data into a satellite object
satellite = EarthSatellite(line1, line2, name='TIANQI-23')

# Load timescale
ts = load.timescale()

while True:
    try:
        # Get current UTC time
        now = datetime.utcnow()

        # Compute satellite position at the current time
        t = ts.utc(now.year, now.month, now.day, now.hour, now.minute, now.second + now.microsecond / 1e6)
        position = satellite.at(t)

        # Get GeographicPosition object
        geo_position = position.subpoint()

        # Extract latitude, longitude, and altitude in degrees and kilometers
        latitude = geo_position.latitude.degrees
        longitude = geo_position.longitude.degrees

        print(f"Latitude, Longitude: {latitude}, {longitude}")

        # Calculate altitude (height above Earth's surface)
        distance_from_earth_center = position.distance().km
        radius_of_earth = 6371.0  # Radius of the Earth in kilometers
        altitude = distance_from_earth_center - radius_of_earth

        print(f"Altitude: {altitude} km")

        # Delay for a while before fetching the next position
        time.sleep(10)  # Fetch position every 10 seconds (adjust as needed)
    except KeyboardInterrupt:
        print("\nTerminated by user.")
        break
    except Exception as e:
        print(f"Error occurred: {e}")
