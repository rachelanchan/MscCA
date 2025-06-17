from pip._vendor import requests

def fetch_country_info(api_url, country_name):
    url = f"{api_url}/v3.1/name/{country_name}?fullText=true"
    response = requests.get(url)
    
    if response.status_code == 200:
        return response.json()
    else:
        print(f"Error: {response.status_code}")
        return None

def display_country_info(country_info):
    if country_info:
        print("Country Information")
        print(f"Name: {country_info[0]['name']['common']}")
        print(f"Capital: {country_info[0]['capital'][0]}")
        print(f"Population: {country_info[0]['population']}")
        print(f"Region: {country_info[0]['region']}")
    else:
        print("No country information available.")

if __name__ == "__main__":
    api_url = "https://restcountries.com/"
    country_name = input("Enter the country name: ")  # enter the desired country name
    country_info = fetch_country_info(api_url, country_name)
    display_country_info(country_info)
