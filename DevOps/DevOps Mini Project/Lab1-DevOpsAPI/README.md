### Lab 1: API Consumption

The Python script (`api_demo_lab1.py`) is designed to fetch and display information about a country using a REST API.

1. **The `fetch_country_info()` function** takes two parameters:
   - `api_url` (base URL of the API)
   - `country_name`

2. It constructs a URL for the API call by appending the `country_name` to the `api_url`.

3. It sends a GET request to the constructed URL using `requests.get(url)`.

4. If the response status code is `200` (OK), it returns the JSON content of the response; otherwise, it prints an error message and returns `None`.

5. **The `display_country_info()` function** takes `country_info` as a parameter.

6. If `country_info` is not `None`, it prints various details about the country, such as:
   - Its name
   - Capital
   - Population
   - Region
   The information is extracted from the JSON response.

7. If `country_info` is `None`, it prints a message indicating that no country information is available.

8. The script checks if it is being run as the main program (`__name__ == "__main__"`).

9. It sets the `api_url` to https://restcountries.com/.

10. It prompts the user to enter a country name and then calls the `fetch_country_info()` function to obtain information about the specified country.

11. Finally, it calls the `display_country_info()` function to print the country information to the console.
