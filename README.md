# CMP Native SDK (iOS) Readme - 6.28.0

## App Setup

### Requirements
The OneTrust Headless SDK for Publishers was developed using Swift and requires **iOS 11.0** and above.
- Note: We do support iOS 10 with XCFramework downloaded from the OneTrust portal. 

### Import using .framework (supported for Legacy Build System only).
1. Download and unzip Publishers Native SDK. The SDK can be downloaded from the Mobile SDKs page in the OneTrust platform.
2. Select the SDK that is compatible with the version of Xcode and Swift. Folders suffixed with -Test contain simulator and device architectures. Folders without -Test contain only device specific architectures.
  - If using Xcode 11.7, use the OTPublishersHeadlessSDK.framework provided under OTPublishersHeadlessSDK-11.7 folder based on your bitcode configuration.
  - If using Xcode 12.x, use the OTPublishersHeadlessSDK.framework provided under OTPublishersHeadlessSDK-12 folder based on your bitcode configuration.
3. Drag and drop OTPublishersHeadlessSDK.framework into your Xcode project. Check **Copy Items If Needed**.
4. Add OTPublishersHeadlessSDK to "Embedded Frameworks" and to "Link Binary With Libraries" under Target's Build Phases Tab if not automatically added.
5. Select "Embed & Sign" for "Frameworks, Libraries, and Embedded contents" under Target's General Tab.

### Import using .xcframework
1. Download and unzip the iOS SDK. The SDK can be downloaded from the Mobile SDKs page in the OneTrust platform.
2. OTPublishersHeadlessSDK-XCFramework folder contains a pre-compiled binary package as XCFramework. 
3. Drag and drop OTPublishersHeadlessSDK.xcframework into your Xcode project. Check **Copy Items If Needed**.
4. Add OTPublishersHeadlessSDK.xcframework to "Embedded Frameworks" and to "Link Binary With Libraries" under Target's Build Phases Tab if not automatically added.
5. Select "Embed & Sign" for "Frameworks, Libraries, and Embedded contents" under Target's General Tab.
6. If the application have been using .framework earlier, delete any existance of .framework and it's references from Target's Build or General Settings before adopting .xcframework.
  - Delete the existing OTPublishersHeadlessSDK.framework from Application.
  - Remove OTPublishersHeadlessSDK.framework from "Embedded Frameworks" and to "Link Binary With Libraries" under Target's Build Phases Tab if not automatically removed.

### Import using CocoaPods
1. If the application have been using .framework or .xcframework earlier, delete any existance of .framework/.xcframework and all of it's references from Target's Build or General Settings before adopting Pods.
  - Delete the existing OTPublishersHeadlessSDK.framework / OTPublishersHeadlessSDK.xcframework from Application.
  - Remove OTPublishersHeadlessSDK.framework / OTPublishersHeadlessSDK.xcframework from "Embedded Frameworks" and to "Link Binary With Libraries" under Target's Build Phases Tab if not automatically removed.
2. Add Podfile to your Application if using CocoaPod for the first time. Refer: https://guides.cocoapods.org/syntax/podspec.html
3. Edit pod file to add the Pod name and version of your choice. Support for CocoaPods is added on version 6.3.0.0 and above.
Ex:
        `pod 'OneTrust-CMP-XCFramework', '~> 6.28.0.0' `
    Replace the Xcode version with version of your choice. OneTrust Support Xcode 11.0+.
4. Go to terminal, change working directory to the directory where pod file resides.
       - Run `pod install`
5. Open .xcworkspace file in Xcode and run the app.

### Import Header
Import header to begin using OTPublishersHeadlessSDK methods.

Swift: `import OTPublishersHeadlessSDK`
ObjC:  `#import <OTPublishersHeadlessSDK/OTPublishersHeadlessSDK-Swift.h>`


### Import tvOS Framework
The OneTrust Native SDK support is extended for tvOS. It is developed using Swift and requires **tvOS 11.0** and above.

### Import using .framework
1. Download and unzip Publishers Native SDK. The SDK can be downloaded from the Mobile SDKs page in the OneTrust platform.
2. Select the SDK that is compatible with the version of Xcode and Swift. Folders suffixed with -Test contain simulator and device architectures. Folders without -Test contain only device specific architectures.
  - If using Xcode 11.7, use the OTPublishersHeadlessSDKtvOS.framework provided under OTPublishersHeadlessSDK-11.7 folder based on your bitcode configuration.
  - If using Xcode 12.x, use the OTPublishersHeadlessSDKtvOS.framework provided under OTPublishersHeadlessSDK-12 folder based on your bitcode configuration.
3. Drag and drop OTPublishersHeadlessSDKtvOS.framework into your Xcode project. Check **Copy Items If Needed**.
4. Add OTPublishersHeadlessSDKtvOS to "Embedded Frameworks" and to "Link Binary With Libraries" under Target's Build Phases Tab if not automatically added.
5. Select "Embed & Sign" for "Frameworks, Libraries, and Embedded contents" under Target's General Tab.

### Import using .xcframework
1. Download and unzip the SDK. The SDK can be downloaded from the Mobile SDKs page in the OneTrust platform.
2. OTPublishersHeadlessSDK-XCFramework folder contains a pre-compiled binary package as XCFramework. 
3. Drag and drop OTPublishersHeadlessSDKtvOS.xcframework into your Xcode project. Check **Copy Items If Needed**.
4. Add OTPublishersHeadlessSDKtvOS.xcframework to "Embedded Frameworks" and to "Link Binary With Libraries" under Target's Build Phases Tab if not automatically added.
5. Select "Embed & Sign" for "Frameworks, Libraries, and Embedded contents" under Target's General Tab.
6. If the application have been using .framework earlier, delete any existance of .framework and it's references from Target's Build or General Settings before adopting .xcframework.
  - Delete the existing OTPublishersHeadlessSDKtvOS.framework from Application.
  - Remove OTPublishersHeadlessSDKtvOS.framework from "Embedded Frameworks" and to "Link Binary With Libraries" under Target's Build Phases Tab if not automatically removed.

### Import using CocoaPods
1. If the application have been using .framework or .xcframework earlier, delete any existance of .framework/.xcframework and all of it's references from Target's Build or General Settings before adopting Pods.
  - Delete the existing OTPublishersHeadlessSDKtvOS.framework / OTPublishersHeadlessSDKtvOS.xcframework from Application.
  - Remove OTPublishersHeadlessSDKtvOS.framework / OTPublishersHeadlessSDKtvOS.xcframework from "Embedded Frameworks" and to "Link Binary With Libraries" under Target's Build Phases Tab if not automatically removed.
2. Add Podfile to your Application if using CocoaPod for the first time. Refer: https://guides.cocoapods.org/syntax/podspec.html
3. Edit pod file to add the Pod name and version of your choice. Support for tvOS in CocoaPods is added on version 6.4.0.0 and above.
Ex:
        `pod 'OneTrust-CMP-tvOS-XCFramework', '~> 6.28.0.0' `
    Replace the Xcode version with version of your choice. OneTrust Support Xcode 11.0+.
4. Go to terminal, change working directory to the directory where pod file resides.
       - Run `pod install`
5. Open .xcworkspace file in Xcode and run the app.

### Import Header
Import header to begin using OTPublishersHeadlessSDK methods.

Swift: `import OTPublishersHeadlessSDKtvOS`
ObjC:  `#import <OTPublishersHeadlessSDKtvOS/OTPublishersHeadlessSDKtvOS-Swift.h>`

## Usage
### Initialize SDK and fetch OTT data
OneTrust allows you to retrieve an object that contains all the data needed to build a UI to collect consent for the SDKs used in your application. The data returned will be depending on the features that have been enabled in your OneTrust environment.

How do I know which one to use? If you answer Yes to the below questions, you can use the method that fetches all data required to build your UI.
- Were you provided a JS endpoint that ends with **otSDKStub.js**?
- Were you provided with more than one parameter to pass into the method?

This method allows you to fetch OTT data. The parameters passed are :-
- **CDN Location** is the location to which your *otSDKStub.js* pointed to.
  - For instance: If "https://cdn.cookielaw.org/scripttemplates/otSDKStub.js" is the JS url provided by OneTrust environment, then your CDN Location will be "cdn.cookielaw.org".
- **domainIdentifier**  is the Application Identifier.
- **languageCode** is the language code configured in the template used by your application. Any language code format which is not listed in OneTrust environment will be considered as invalid input.  
  - **if the languageCode passed by your application is valid but does not match with the one configured in your templates, then SDK will return content in the default language configured in OneTrust environment.**
- **OTCallback** is the callback you have to implement to get the OTT data when SDK fetch process is done.
- **OTSDKParams** parameter which contains valid country code and region code or create profile params passed by the application.

**Passing Custom Geolocation**
 Application can pass Country code, Region code and create profile parameters while initializing the SDK inorder to get the application data as per the geolocation rules configured in OneTrust environment.
 SDK will take the passed parameters as the user's current location and returns the application data. 
 parameters passed should be :-
 - countryCode - ISO 3166-2 two-letter country code.
 - regionCode - two-letter state code, optional parameter.
 - create profile - *String*, Pass *"true"* to create profile, which creates a profile in OneTrust console to track consent transactions for a known user.
 If you application has set a data subject identifier using the public method, and passes this value as true as shown in the example code, then OneTrust will create a profile for that identifier in the console. Refer *Cross Device Profile Sync* section for more details.
 All the subsequent consent transactions can be tracked with respect to the profile created with the identifier. **If the identifier is not set by the application, but this parameter is set as true, then SDK will not consider creating profile for the same.**
 SDK will return error as part of the response if the parameters passed are not as per the standards mentioned above.
 
*If there is no geolocation rule configured for the passed parameters in the OneTrust console, then SDK will compute geolocation internally and return data as per the user's current location.*


Swift:
```
let sdkParams = OTSdkParams(countryCode: "US", regionCode: "CA")
sdkParams.setShouldCreateProfile("true")
OTPublishersHeadlessSDK.shared.startSDK(storageLocation: "otcc-demo.otprivacy.com", domainIdentifier: "3598fb78-0000-1111-2222-83ee558d6e87", languageCode: "en", params: sdkParams) { response in
    print("OTT Data fetch status: \(response.status), result: \(response.responseString ?? "") and error: \(response.error ?? "")")
}
```
ObjC: 
```
OTSdkParams *sdkParams = [[OTSdkParams alloc]initWithCountryCode:@"US" regionCode:@"CA"];
[sdkParams setShouldCreateProfile: @"true"];
[OTPublishersHeadlessSDK.shared startSDKWithStorageLocation:@"otcc-demo.otprivacy.com" domainIdentifier:@"3598fb78-0000-1111-2222-83ee558d6e87" languageCode:@"en" params:nil completionHandler:^(OTResponse *response) {
    NSLog(@"OTT Data fetch status: %d, result: %@ and error: %@", response.status, response.responseString, response.error);
}];
```

The combination of storageLocation and domainIdentifier is unique to every application. Replace these with the ones obtained from your OneTrust environment.
Whenever you call the above mentioned method,  OT SDK will return the server response in string format in its completion block (if the application wants to store the entire data). OT SDK will be storing ONLY the necessary data that would be required for the OT SDK to work ( it will not be storing the entire server response.)

This data stored by OT SDK can be accessed by the consumer application as follows :-
- **Domain Information** - This method returns a dictionary containing all the information about the domain including rule sets and template configurations.

Swift: `OTPublishersHeadlessSDK.shared.getDomainInfo()`
ObjC: `[OTPublishersHeadlessSDK.shared getDomainInfo];`

- **Domain Groups** - This method returns a dictionary containing the information about all the categories and sdk IDs specific to a template configured for the user's geolocation.

Swift: `OTPublishersHeadlessSDK.shared.getDomainGroupData()`
ObjC: `[OTPublishersHeadlessSDK.shared getDomainGroupData];`

- **CommonData** - This method returns a dictionary which contains the branding information which includes keys for determining colors and styles in the UI specific to a template configured for the user's geolocation along with consent logging information.

Swift: `OTPublishersHeadlessSDK.shared.getCommonData()`
ObjC: `[OTPublishersHeadlessSDK.shared getCommonData];`

- **Banner Data** - This method returns a dictionary which contains all the keys required to render a banner. 
Swift: `OTPublishersHeadlessSDK.shared.getBannerData()`
ObjC: `[OTPublishersHeadlessSDK.shared getBannerData];`
 
 - **Preference Center Data** - This method returns a dictionary which contains all the keys required to render a Preference Center. 
 Swift: `OTPublishersHeadlessSDK.shared.getPreferenceCenterData()`
 ObjC: `[OTPublishersHeadlessSDK.shared getPreferenceCenterData];`
 
 ## Cross Device Profile Sync
 OneTrust allows your application to track Consent transactions for a known user by creating a profile and sync this profile with respect to consent values across various devices. SDK provides various methods to set parameters to create and enable profile sync. By enabling this feature, the consent given for categories by a known user on a particular device will be reflected when logged into a new device with same configuration.
 
 ### How to configure?
 Your application need to have all the required parameters mentioned below to configure it.
 *Parameters required :- *
 - *identifier* - a valid *String* value, profile will be created and synced based on this data subject identifier. SDK will be using this identifier for all consent transactions.
 - *profile auth id* - a valid JWT token created with respect to the Data subject identifier passed.
 - *sync profile* - a valid *String* value. Pass *"true"* to enable profile syncing.
 
 Set these parameters to SDK as shown below.
 
 Swift:
 ```
 let profileSyncParam = OTProfileSyncParams()
 profileSyncParam.setSyncProfile("true")
 profileSyncParam.setSyncProfileAuth("JWT token")
 profileSyncParam.setIdentifier("userId")
 
 //set this profile parameters to the SDK params 
 let sdkParams = OTSdkParams(countryCode: "US", regionCode: "CA")
 sdkParams.setShouldCreateProfile("true")
 sdkParams.setProfileSyncParams(profileSyncParam)
 
 //pass it to SDK on initialization
 OTPublishersHeadlessSDK.shared.startSDK(storageLocation: "otcc-demo.otprivacy.com", domainIdentifier: "3598fb78-0000-1111-2222-83ee558d6e87", languageCode: "en", params: sdkParams) { response in
     print("OTT Data fetch status: \(response.status), result: \(response.responseString ?? "") and error: \(response.error ?? "")")
 }
 ```
 ObjC: 
 ```
 OTProfileSyncParams *profileSyncParam = [[OTProfileSyncParams alloc] init];
 [profileSyncParam setSyncProfile:@"true"];
 [profileSyncParam setSyncProfileAuth:@"JWT token"];
 [profileSyncParam setIdentifier:@"userId"];
 
 //set this profile parameters to the SDK params and pass it to SDK on initialization
 OTSdkParams *sdkParams = [[OTSdkParams alloc]initWithCountryCode:@"US" regionCode:@"CA"];
 [sdkParams setShouldCreateProfile:@"true"];
 [sdkParams setProfileSyncParams:profileSyncParam];
 
 //pass it to SDK on initialization
 [OTPublishersHeadlessSDK.shared startSDKWithStorageLocation:@"otcc-demo.otprivacy.com" domainIdentifier:@"3598fb78-0000-1111-2222-83ee558d6e87" languageCode:@"en" params:sdkParams completionHandler:^(OTResponse *response) {
     NSLog(@"OTT Data fetch status: %d, result: %@ and error: %@", response.status, response.responseString, response.error);
 }];
 ```
 
 *If all of the categories are synced and updated, then banner will not be displayed while logging into a new device.*
 

### Update and Save Consent Status for a Category
Update and save consent status for an IAB Group/Category when user interacts with banner. This can be used to update consent status for a specific category to `true` or `false` based on user's input. Simply pass in the Custom group ID and value to the below given method to update values.

## Usage
Create a new object of SDK class, through which you can update the consent status of a category. Modify the consent status of a category by passing Custom Group ID as the key and consent status as value. Note that you have to call **'saveConsentValue()'** to have any modifications you perform to actually register in OneTrust SDK.
OneTrust will notify the consent status changes to your app on saving changes.

Swift: `OTPublishersHeadlessSDK.shared.updatePurposeConsent(forGroup: "C0004", consentValue: true)`
ObjC: `[OTPublishersHeadlessSDK.shared updatePurposeConsentForGroup:@"C0004" consentValue:true];`

`// Based on your UI implementation, Save Consent changes atomically to OTPublishersHeadlessSDK object or after modifiying all those categories which have to be updated.`
Swift: `OTPublishersHeadlessSDK.shared.saveConsentValue()`
ObjC: `[OTPublishersHeadlessSDK.shared saveConsentValue];`

Sample implementation on how to update and save, if you have multiple categories to update at a time.

Swift:
```
OTPublishersHeadlessSDK.shared.updatePurposeConsent(forGroup: "C0004", consentValue: true)
OTPublishersHeadlessSDK.shared.updatePurposeConsent(forGroup: "C0005", consentValue: true)
OTPublishersHeadlessSDK.shared.updatePurposeConsent(forGroup: "C0006", consentValue: true)
OTPublishersHeadlessSDK.shared.updatePurposeConsent(forGroup: "IABV2_6", consentValue: true)
OTPublishersHeadlessSDK.shared.saveConsentValue()
```

ObjC: 
```
[OTPublishersHeadlessSDK.shared updatePurposeConsentForGroup:@"C0004" consentValue:true];
[OTPublishersHeadlessSDK.shared updatePurposeConsentForGroup:@"C0005" consentValue:true];
[OTPublishersHeadlessSDK.shared updatePurposeConsentForGroup:@"C0006" consentValue:true];
[OTPublishersHeadlessSDK.shared updatePurposeConsentForGroup:@"IABV2_6" consentValue:true];
[OTPublishersHeadlessSDK.shared saveConsentValue];
```

Parameters passed in updateConsentValue() are :-
- forGroup - custom Group ID contained in the group dictionary returned by SDK public methods.
- consentValue - Consent status given by the user for a category / group. If 'C0004' is the custom group id for 'Social Media Category' and user have enabled the toggle/given consent, then application will have to call `OTPublishersHeadlessSDK.shared.updatePurposeConsent(forGroup: "C0004", consentValue: true)`
followed by `OTPublishersHeadlessSDK.shared.saveConsentValue()`

**Note: `saveConsentValue()` method will be deprecated and eventually will get removed from SDK. Use `OTPublishersHeadlessSDK.shared.saveConsent(type: .preferenceCenterConfirm)` for saving consent from Preference Center and pass interaction type as `ConsentInteractionType.vendorListConfirm` if saved from Vendor list UI.**

### Query Consent Status for a Category
Query the current consent status for any of the Categories included in your application. This can be used to determine what privacy action is needed at app launch or anytime the consent status is needed without being notified by an event broadcast. Simply pass in the Category ID (eg. C0001) and the method will return the current consent status.

Swift: `OTPublishersHeadlessSDK.shared.getConsentStatus(forCategory: "C0002")`
ObjC: `[OTPublishersHeadlessSDK.shared getConsentStatusForCategory:@"C0002"];`

Parameter passed :-
- forCategory - Custom group ID contained in the group dictionary returned by SDK public methods. Custom group IDs for each category can be obtained from OneTrust console as well. 

Returns the following Integer values:
-  1 = Consent Given
-  0 = Consent Not Given
- -1 = Consent has not been collected/ sdk is not yet initialized

### Query Consent Status for a Specific SDK
Query the current consent status for any of the SDKs included in your application. This can be used to determine what privacy action is needed at application launch or anytime the consent status is needed without being notified by an event broadcast. Pass in the SDK ID and the method will return the current consent status.

Swift: `OTPublishersHeadlessSDK.shared.getConsentStatus(forSDKId: "2368810c-94da-4f18-ab92-c55c5f74cca9")`
ObjC: `[OTPublishersHeadlessSDK.shared getConsentStatusForSDKId:@"2368810c-94da-4f18-ab92-c55c5f74cca9"];`

Parameter passed :-
- SDK GUID - SDK ID contained in the group dictionary returned by SDK public methods. SDK IDs for each SDK configured in the application can be obtained from OneTrust console as well. 

Returns the following Integer values:
- 1 = Consent Given
- 0 = Consent Not Given
- -1 = Consent has not been collected

### Show Banner Status
This method will inform your application if the OneTrust Banner has to be presented to the user or not for the user's current location. This method will return true or false based on the geolocation configurations you have assigned for the application in OneTrust environment.
This can be used by your app to determine if functions to build and display UI have to be called.

Swift: `OTPublishersHeadlessSDK.shared.shouldShowBanner()`
ObjC: `[OTPublishersHeadlessSDK.shared shouldShowBanner];`


Returns the following values:
true = show banner for that geolocation 
false = don't show banner for user's geolocation / consent has been taken already.

### Banner Shown Status
This method will allow your application to know if the OneTrust SDK UI was presented to the user at least once. This method can be used to determine if your application should populate a button to allow a user to access the preference center to update their preferences.

Swift:
`OTPublishersHeadlessSDK.shared.isBannerShown()`
ObjC: 
`[OTPublishersHeadlessSDK.shared isBannerShown];`

Returns the following Integer values:
 1  = Banner / Preference Center shown 
 0  = Banner / Preference Center never shown to user(implied consent)   
-1  = SDK not initialized yet
 2  = Banner / Preference Center was not shown, profile synced (applicable only to those who use cross device profile syncing).

Preference Center can be presented to user if the value returned by this method is greater than 0.

### Fetch User Consented Geolocation data 
This method returns the last user consented location, so that your application can determine how to handle the user flow for that user.

Swift: `OTPublishersHeadlessSDK.shared.getLastUserConsentedLocation()`
ObjC: `[OTPublishersHeadlessSDK.shared getLastUserConsentedLocation];`

This will return OTGeolocationModel with following details :- 
Swift:
```
OTGeolocationModel geolocationData =  OTPublishersHeadlessSDK.shared.getLastUserConsentedLocation()
```
ObjC:
```
OTGeolocationModel *geolocationData = [OTPublishersHeadlessSDK.shared getLastUserConsentedLocation];
```
- geolocationData.country - last user consented country 
- geolocationData.state - last user consented state 

### Fetch Data Downloaded Geolocation data 
This method returns the last user location where the OT SDK data was downloaded, so that your application can determine how to handle the user flow for that user. If data is not downloaded yet, this method will return a default geo location.

Swift: `OTPublishersHeadlessSDK.shared.getLastDataDownloadedLocation()`
ObjC: `[OTPublishersHeadlessSDK.shared getLastDataDownloadedLocation];`

This will return OTGeolocationModel with following details :- 
Swift:
```
OTGeolocationModel geolocationData =  OTPublishersHeadlessSDK.shared.getLastDataDownloadedLocation()
```
ObjC:
```
OTGeolocationModel *geolocationData = [OTPublishersHeadlessSDK.shared getLastDataDownloadedLocation];
```
- geolocationData.country - last data downloaded country 
- geolocationData.state - last data downloaded state 

### Save Consent based on the Interaction type
This method will allow your application to save consent for categories based on the type of user interaction.  
For ex. If user has clicked on Allow all button, app will have to call this method with interaction type as `ConsentInteractionType.bannerAllowAll`. This method can be called by application as follows:-

Swift:
`OTPublishersHeadlessSDK.shared.saveConsent(type: .bannerAllowAll)`

ObjC:
`[OTPublishersHeadlessSDK.shared saveConsentWithType:OTConsentInteractionTypeBannerClose];`

Following are the Interaction types provided by SDK.
- ConsentInteractionType.bannerAllowAll - when user clicks Accept all button from Banner.
- ConsentInteractionType.bannerRejectAll - when user clicks Reject all button from Banner.
- ConsentInteractionType.bannerClose - when user clicks close icon from Banner.
- ConsentInteractionType.preferenceCenterAllowAll - when user clicks Accept all button from Preference Center.
- ConsentInteractionType.preferenceCenterRejectAll - when user clicks reject all button from Preference Center.
- ConsentInteractionType.preferenceCenterConfirm - when user clicks Confirm choices button from Preference Center.
- ConsentInteractionType.vendorListConfirm - when user clicks Confirm choices button from Vendor List UI.

### Allow Consent for all Categories
This method will allow your application to update the status of all categories to 1 and notify app about all the changes. 

Swift: `OTPublishersHeadlessSDK.shared.acceptAll()`
ObjC:  `[OTPublishersHeadlessSDK.shared acceptAll]; `
**If your application has configured an IAB V2.0 template, this method will update the values of IAB purposes, Legitimate Interests if any, special feature Opt-ins, Vendor Consents and Vendor Legitimate Interests if any, to 1 along with Categories. SDK will encode these updated values, generate TCString and save it to the UserDefaults.**

**Note: This method will be deprecated and eventually will get removed from SDK. Use `OTPublishersHeadlessSDK.shared.saveConsent(type: .bannerAllowAll)` for this scenario.**

### Withdraw Consent for all Categories
This method will allow your application to update the status of all categories to 0 except for those configured as 'Strictly necessary' categories and notify app about all the changes. 

Swift: `OTPublishersHeadlessSDK.shared.rejectAll()`
ObjC: `[OTPublishersHeadlessSDK.shared rejectAll]; `
**If your application has configured an IAB V2.0 template, this method will update the values of IAB purposes, Legitimate Interests if any, special feature Opt-ins, Vendor Consents and Vendor Legitimate Interests if any, to 0 along with Categories. SDK will encode these updated values, generate TCString and save it to the UserDefaults.**

**Note: This method will be deprecated and eventually will get removed from SDK. Use `OTPublishersHeadlessSDK.shared.saveConsent(type: .bannerRejectAll)` for this scenario.**

### Save default consent values for all Categories
This method will allow your application to save the default values for all the categories depending on the consent model applied to each of these categories and notify app about the changes. This method can be called when user skips the consent view by closing the banner on any other scenarios in which user navigates away without giving consent but consent has to be taken on behalf of the user.
If consent has been given by the user prior to calling this method, it will consider the already saved values for all the categories.

Swift: `OTPublishersHeadlessSDK.shared.saveDefaultConsentValues()`
ObjC: `[OTPublishersHeadlessSDK.shared saveDefaultConsentValues]; `

**If your application has configured an IAB V2.0 template, this method will update the values of IAB purposes, Legitimate Interests if any, special feature Opt-ins, Vendor Consents and Vendor Legitimate Interests if any, to default values configured for it along with Categories. SDK will encode these updated values, generate TCString and save it to the UserDefaults.**

**Note: This method will be deprecated and eventually will get removed from SDK. Use `OTPublishersHeadlessSDK.shared.saveConsent(type: .bannerClose)` for this scenario.**

### Reset updated consent values for all Categories
This method will allow your application to reset the updated values for all the categories. This method can be called when user skips the consent view by closing the Preference Center or on any other scenarios in which application has to clear the user selections given by the user.
On calling this method SDK will reset the values of all categories / SDKs to previously saved values. If no consent has been saved prior to calling this method, then values will be reset to according to the default consent model configured for each category.

Swift: `OTPublishersHeadlessSDK.shared.resetUpdatedConsent()`
ObjC: `[OTPublishersHeadlessSDK.shared resetUpdatedConsent]; `

### Clear SDK Data
This method will delete all the data saved in the SDK for a particular JS Url and Application ID. When application calls this method, SDK will clear the values saved in userDefaults if any, delete all consent values set to SDK and reset all public method values to defaults.

Swift: `OTPublishersHeadlessSDK.shared.clearOTSDKData()`
ObjC: `[OTPublishersHeadlessSDK.shared clearOTSDKData]; `

### Get Vendor List UI 
This method will allow your application to retrieve the dictionary required to render the vendor list UI. It returns a dictionary containing local state of active IAB or Google Vendor List (based on the mode) if values are updated without save using updateVendorConsent/updateVendorLegitInterest. Returns previously saved IAB/Google vendor state if nothing has changed. Nil if no active vendors are found.

Swift: `OTPublishersHeadlessSDK.shared.getVendorListUI(for:)`
ObjC: `[OTPublishersHeadlessSDK.shared getVendorListUIFor:];`

### Get Vendor List Data 
This method will allow your application to retrieve the dictionary required to render the vendor list UI. It returns a dictionary containing saved state of active IAB/Google Vendor List (based on the mode).
Returns nil if no active vendors are found.

Swift: `OTPublishersHeadlessSDK.shared.getVendorListData(for:)`
ObjC: `[OTPublishersHeadlessSDK.shared getVendorListDataFor:];`

### Update Vendor Consent
This method will allow your application to update consent value for IAB/Google vendors based on the mode. Applications will have to pass a valid **String value** vendor ID along with a boolean state.
Calling this method will only update the local state of consent. To persist the updated values, applications will have to call **'saveConsentValue()'** method explicitly. 

Swift: `OTPublishersHeadlessSDK.shared.updateVendorConsent(vendorId: "51", consentStatus: true, for: .iab)`
Swift: `OTPublishersHeadlessSDK.shared.updateVendorConsent(vendorId: "50", consentStatus: true, for: .google)`
ObjC:  `[OTPublishersHeadlessSDK.shared updateVendorConsentWithVendorId:@"51" consentStatus:true for: VendorListModeIAB];`
ObjC:  `[OTPublishersHeadlessSDK.shared updateVendorConsentWithVendorId:@"50" consentStatus:true for: VendorListModeGoogle];`

### Update Vendor Legitimate Interest
This method will allow your application to update legitimate interest value for Active IAB/Google Vendor based on the passed in `mode`.
Applications will have to pass a valid  **String value** vendor ID along with a boolean state. 
Calling this method will only update the local state of legitimate interest. To persist the updated values, applications will have to call **'saveConsentValue()'** method explicitly.  
If Legitimate Interests toggles are configured to be disabled for an application, then value will not get updated.
Note: Legitimate Interests as of today can be updated only for IAB vendors. Passing in Google vendors as the mode, will not update the LI status as it does not apply.

Swift: `OTPublishersHeadlessSDK.shared.updateVendorLegitInterest(vendorId: "51", legIntStatus: true for: .iab)`
ObjC: `[OTPublishersHeadlessSDK.shared updateVendorLegitInterestWithVendorId:@"51" legIntStatus:true for: VendorListModeIAB];`

### Update Purpose Legitimate Interest
This method will allow your application to update legitimate interest value for an IAB purpose. Applications will have to pass a valid  **String value** group identifier along with a boolean state.
Calling this method will only update the local state of legitimate interest. To persist the updated values, applications will have to call **'saveConsentValue()'** method explicitly. 
If Legitimate Interests toggles are configured to be disabled for an application, then value will not get updated.

Swift: `OTPublishersHeadlessSDK.shared.updatePurposeLegitInterest(forGroup: "ISFV2_1", legIntValue: true)`
ObjC: `[OTPublishersHeadlessSDK.shared updatePurposeLegitInterestForGroup:@"ISFV2_1" legIntValue:true];`

### Get locally Saved Purpose Consent
This method will allow your application to retrieve local consent value for an IAB purpose / category. Applications will have to pass a valid **String value** group identifier which is obtained from group dictionary returned by SDK public methods.
Calling this method will get the local state of consent if values are changed with **`updatePurposeConsent`** method. If values are not changed, this will retrieve last stored value.

Swift: `OTPublishersHeadlessSDK.shared.getPurposeConsentLocal(forCustomGroupId: "ISFV2_1")`
ObjC:  `[OTPublishersHeadlessSDK.shared getPurposeConsentLocalForCustomGroupId:@"ISFV2_1"];`

Returns the following Integer values:
- 1 = Consent Given.
- 0 = Consent Not Given.
- -1 = Invalid Group Id passed.

### Get locally Saved Purpose Legitimate Interest
This method will allow your application to retrieve updated legitimate interest value for an IAB purpose. Applications will have to pass a valid **String value** group identifier which is obtained from group dictionary returned by SDK public methods.
Calling this method will get the local state of legitimate interest if values are changed with **`updatePurposeLegitInterest`** method. If values are not changed, this will retrieve last stored value.

Swift: `OTPublishersHeadlessSDK.shared.getPurposeLegitInterestLocal(forCustomGroupId: "IABV2_8")`
ObjC: `[OTPublishersHeadlessSDK.shared getPurposeLegitInterestLocalForCustomGroupId:@"IABV2_8"];`

Returns the following Integer values:
- 1 = Consent Given.
- 0 = Consent Not Given.
- -1 = Invalid Group Id passed / Group Id does not have a Legitimate interest configured for it.

### Override Data subject Identifier
OneTrust SDK logs consent transactions based on consent logging feature that have been enabled in OneTrust's environment. By default, consent logging feature will generate a unique identifier for each device and log transactions considering it as an anonymous user.
 OneTrust provides a method to override this randomly generated identifier by passing a valid **String value** for **identifier** variable. This method will set the value to SDK and show as the Data Subject Identifier in OneTrust environment while reviewing transactions. This method MUST be called after initializing the SDK.
 If the identifier is set after user giving consent, then the last anonymous transaction and the subsequent transactions will be logged with the new identifier set by your application.

Swift: `OTPublishersHeadlessSDK.shared.overrideDataSubjectIdentifier("userId")
`
ObjC: `[OTPublishersHeadlessSDK.shared overrideDataSubjectIdentifier:@"userId"];`

Parameter passed - a valid String value.

### Set Data subject Identifier 
OneTrust SDK logs consent transactions based on consent logging feature that have been enabled in OneTrust's environment. By default, consent logging feature will generate a unique identifier for each device and log transactions considering it as an anonymous user.

OneTrust provides a method to set an identifier defined by application by passing a valid **String value** for **identifier** parameter. This method will set the value to SDK and show as the Data Subject Identifier in OneTrust environment while reviewing transactions. This method MUST be called after initializing the SDK **(mentioned in method #2)**  for the first time. 
 
 If the identifier is set after user giving consent, then the subsequent transactions will be logged with the new identifier set by your application. If an empty identifier is passed, OneTrust will remove the last saved identifier passed by application.
 
 Use this method when you only want to set Data Subject Identifier without logging consent. Use Override Data subject Identifier when you want to set the Data Subject Identifier along with logging last given consent with newly set Identifier.

Swift:
`OTPublishersHeadlessSDK.shared.setDataSubjectIdentifier("User Identifier")`
ObjC:
`[OTPublishersHeadlessSDK.shared setDataSubjectIdentifier:@"User Identifier"];`
**Note: This method will be deprecated and eventually will get removed from SDK. Instead of above method, now Data Subject Identifier is get or set using** `OTPublishersHeadlessSDK.shared.cache.dataSubjectIdentifier` for getting and `OTPublishersHeadlessSDK.shared.cache.dataSubjectIdentifier = "Idetifier"` for setting.

### Set Up Event Observer
Each time a user updates their consent preferences the OneTrust SDK will broadcast events to notify your application so the appropriate privacy settings can be updated. Your application only needs observers for the SDKs or Categories that require some action to be taken when a user gives their consent. 

First, create a function that will be called when the observer is activated. If you are listening for Categories, you will need to create a function for each Category.

Swift: 
```
// Category Observer Function
@objc func actionConsent_Category_Name(_ notification:Notification){
    let consentValue = notification.object as? String
    NSLog("Category Consent Value = \(consentValue ?? "false")")
}
```
ObjC:
```
// Category Observer Function
- (void)actionConsent_Category_Name:(NSNotification *)notification
{
    NSString *consentValue = [notification object];
    NSLog(@"Category Consent Value = %@", consentValue);
}
```

Next, register the observer. Your application will need to register an observer for each Category you created an observer function for.
Swift:
```
NotificationCenter.default.addObserver(self,
      selector: #selector(actionConsent_Category_Name(_:)),
      name: NSNotification.Name(rawValue: "C0003"),
      object: nil)
```
ObjC:
```
[NSNotificationCenter.defaultCenter addObserver:self
selector:@selector(actionConsent_Category_Name:) name:@"C0003" object:nil];
```
Finally, unregister the observer when the view is destroyed.
Swift:
```
NotificationCenter.default.removeObserver(NSNotification.Name(rawValue: "C0003"))
```
ObjC:
```
[NSNotificationCenter.defaultCenter removeObserver:@"C0003"];
```

 ### Get Vendor Details
 OneTrust SDK allows your application to get vendor specific details for a given integer vendor identifier. The vendor details contains vendor name, description, legal description etc. If application supplied **vendorId** is configured, the function will return a dictionary containing the vendor specific details. If passed **vendorId** is invalid or not configured in OneTrust console, nil will be returned. 
 
 Swift:
 `OTPublishersHeadlessSDK.shared.getVendorDetails(vendorId: 535)`
 ObjC:
 `[OTPublishersHeadlessSDK.shared getVendorDetailsWithVendorId: 535];`
 
 Parameter passed :-
 - vendorId - integer value.
 
 ### Update all vendor consent values
 OneTrust SDK allows your application to update the consent values of all vendors to 1 or 0 based on the boolean value passed.  Calling this method will only update the local state of consent values for all vendors. To persist the updated values, applications will have to call **'saveConsentValue()'** method explicitly.
 
 Swift:
 `OTPublishersHeadlessSDK.shared.updateAllVendorsConsentLocal(isSelected: Bool)`
 ObjC:
 `[OTPublishersHeadlessSDK.shared updateAllVendorsConsentLocal:false];`
 
 Parameter passed :-
 - isSelected - Boolean value.
 
 
 ## Write SDK Logs to File
 OneTrust allows developers to write SDK logs to a file and share it for debugging SDK related issues. Enabling SDK verbose logging will write all the SDK logs to 'OTPublisherHeadlessSDKLogs.txt' file under Document Directory. We recommend you enable verbose logging and share above mentioned file with OneTrust on encountering an issue while implementing SDK.

 Swift:
 `OTPublishersHeadlessSDK.shared.writeLogsToFile(true, debugLog: true)`
 ObjC:
 `[OTPublishersHeadlessSDK.shared writeLogsToFile:true debugLog:true];`

 This method will allow developers to enable SDK verbose logging and write all SDK logs to a file. This will write logs to file only if you pass **true** as first parameter in **writeLogsToFile**.

 - pass true as first parameter to write logs to file.
 - **debugLog**
   - pass true to write all types of logs to the file.
   
 Pass **false** for **debugLog** parameter to omit all log types other than **error, info, warning**.

## Rendering SDK UI
OneTrust SDK allows your application to display Banner and Preference center UI on calling public methods. The UI and templates will be displayed as per the features configured in your OneTrust's environment.
Methods used for the set up and rendering UI are given below :-
- Application should initialize the SDK using the `startSDK` method and pass the parameters obtained from OneTrust's environment, before calling render UI methods.
### Set Up UI
This method allows application to render Banner or Preference Center UI from an activity once SDK has been initialized successfully. SDK validates if Banner or Preference center has to be shown based on the geolocation rules configured in OneTrust console and also considering the re-consent scenarios. 
setupUI() method should be called in your main UIViewController or root Navigation Controller. If setupUI() method is not called prior to calling show banner and Preference Center UI methods, SDK will not render UI.

**This method will show UI only if geolocation allows it to be shown for that particular location or a valid consent has to be taken from user.** 
`OTPublishersHeadlessSDK.shared.setupUI(self)`
the parameters passed are :-
    -  ViewController on which UI has to be shown or Root Navigation controller. 
`OTPublishersHeadlessSDK.shared.setupUI(self, UIType: .banner)`
    - .banner - to show banner
    - .preferenceCenter - to show Preference Center.

### Show Banner
This method allows application to display the Banner UI. This method displays banner irrespective of the user given consent earlier or the geolocation rule configurations.
Swift:
`OTPublishersHeadlessSDK.shared.showBannerUI()`
ObjC:
`[OTPublishersHeadlessSDK.shared showBannerUI];`

**Configure Banner Height Settings** 
This method allows your application to configure the height of the banner rendered by SDK. The default setting is to show a full-screen banner, however application can set the height to half-screen or two-third of the screen height as shown below :-

the parameters passed are :-
 - OTBannerHeightRatio.one_half - this will render a half screen banner populated from the bottom of the screen.
 - OTBannerHeightRatio.two_third - banner height will be set to two-third that of the screen height and populated from the bottom of the screen.

Swift:
```
// set the desired value to sdk params
let sdkParams = OTSdkParams(countryCode: "US", regionCode: "CA")
sdkParams.setBannerHeightRatio(.two_third)

// pass this sdk params while initializing SDK
OTPublishersHeadlessSDK.shared.startSDK(storageLocation: "otcc-demo.otprivacy.com", domainIdentifier: "3598fb78-0000-1111-2222-83ee558d6e87", languageCode: "en", params: sdkParams) { response in
    print("OTT Data fetch status: \(response.status), result: \(response.responseString ?? "") and error: \(describing: response.error ?? "")")
}                                  
```
ObjC:
```
// set the desired value to sdk params
OTSdkParams *sdkParams = [[OTSdkParams alloc]initWithCountryCode:@"US" regionCode:@"CA"];
[sdkParams setBannerHeightRatio: OTBannerHeightRatioTwo_third];

// pass this sdk params while initializing SDK
[OTPublishersHeadlessSDK.shared startSDKWithStorageLocation:@"otcc-demo.otprivacy.com" domainIdentifier:@"3598fb78-0000-1111-2222-83ee558d6e87" languageCode:@"en" params:sdkParams completionHandler:^(OTResponse *response) {
    NSLog(@"OTT Data fetch status: %d, result: %@ and error: %@", response.status, response.responseString, response.error);
}];
```

### Show Preference Center
 This method allows application to display the Preference Center UI. This method displays Preference center irrespective of the user given consent earlier or the geolocation rule configurations.
 iOS:
    Swift:
    `OTPublishersHeadlessSDK.shared.showPreferenceCenterUI()`
    ObjC:
    `[OTPublishersHeadlessSDK.shared showPreferenceCenterUI];`
tvOS:
    `showPreferenceCenterUI()` method should call inside application initialization `startSDK` completion block.
    Swift:
    `OTPublishersHeadlessSDK.shared.startSDK(storageLocation: "otcc-demo.otprivacy.com", domainIdentifier: "3598fb78-0000-1111-2222-83ee558d6e87", languageCode: "en") { response in
        if response.status {
            OTPublishersHeadlessSDK.shared.showPreferenceCenterUI()
        }
    }
    `
    ObjC:
    `[OTPublishersHeadlessSDK.shared startSDKWithStorageLocation:@"otcc-demo.otprivacy.com" domainIdentifier:@"3598fb78-0000-1111-2222-83ee558d6e87" languageCode:@"en" params:nil completionHandler:^(OTResponse *response) {
       if response.status {
            [OTPublishersHeadlessSDK.shared showPreferenceCenterUI];
        } 
    }];`
  
### Setup SDK UI Orientation
To keep SDK UI orientation same as application UI orientation then override shouldAutorotate and supportedInterfaceOrientations properties in your Root Navigation Controller and pass reference of Root Navigation Controller to setupUI().

Swift:
```
class RootNavigationController: UINavigationController {

    override func viewDidLoad() {
        super.viewDidLoad()
        OTPublishersHeadlessSDK.shared.setupUI(self, UIType: .banner)
    }

    override var shouldAutorotate: Bool {
        return UIDevice.current.userInterfaceIdiom == .pad ? true : false
    }

    override var supportedInterfaceOrientations: UIInterfaceOrientationMask {
        return UIDevice.current.userInterfaceIdiom == .phone ? .portrait : .landscape
    }
}
```
ObjC:
```
@implementation RootNavigationControllerViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [OTPublishersHeadlessSDK.shared setupUI:self UIType:OTUITypeBanner];
}

- (BOOL)shouldAutorotate {
    return UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPad ? true : false;
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPad ? UIInterfaceOrientationMaskLandscape : UIInterfaceOrientationMaskPortrait;
}
@end
```
### Customizing SDK UI
SDK allows application to customize UI properties and render the UI based on added values adjacent to the keys in OTSDK-UIConfig-iOS.plist file provided by OneTrust SDK. Application will have to confirm UIConfigurator protocol and have to return true for `shouldUseCustomUIConfig()` method.
Application can also confirm `customUIConfigFilePath()` method to provide a custom path for the OTSDK-UIConfig-iOS.plist file.
Please refer to the SDK documentations for more details.

Swift

Step 1: Conforming to uiConfigurator:
The application would need to conform to `uiConfigurator` in `OTPublishersHeadlessSDK` class.

`class AppDelegate: UIResponder, UIApplicationDelegate {
    func application(_ application: UIApplication,
                     didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        initSDKBroadcastObservers()         //initialize & listen to consent change events
        initOTDataFetchedObserver()        // Listen OTData successfully fetch
        OTPublishersHeadlessSDK.shared.uiConfigurator = self // Conform to this in order to customize the UI.
        return true
    }
}`

Step 2: Implement the delegate methods provided in the UIConfigurator.
`extension AppDelegate: UIConfigurator {
    func shouldUseCustomUIConfig() -> Bool {
        return true
    }
    
    func customUIConfigFilePath() -> String? {
        let customPath = Bundle.main.path(forResource: "OTSDK-UIConfig-iOS", ofType: "plist")
        return customPath
    }
}`

Objc:
`@interface AppDelegate ()<OTUIConfigurator>
 @end

 @implementation AppDelegate
 - (BOOL)shouldUseCustomUIConfig {
     return YES;
 }

 - (NSString *)customUIConfigFilePath {
     NSString *customPath = [NSBundle.mainBundle pathForResource:@"OTSDK-UIConfig-iOS" ofType:@"plist"];
     return customPath;
 }
 @end`

### Registering UI Interaction Listeners
  SDK triggeres various events related to UI interactions and presentations. In order to listen to these events, applications can add listeners that conform to this `OTEventListener` protocol and write logic accordingly.
  
  Swift:
  ```
  extension YourCustomClass: OTEventListener {
      func allSDKViewsDismissed(interactionType: ConsentInteractionType) {
      }

      func onHideBanner() {
      }

      func onShowBanner() {
      }

      func onBannerClickedRejectAll() {
      }

      func onBannerClickedAcceptAll() {
      }

      func onShowPreferenceCenter() {
      }

      func onHidePreferenceCenter() {
      }

      func onPreferenceCenterRejectAll() {
      }

      func onPreferenceCenterAcceptAll() {
      }

      func onPreferenceCenterConfirmChoices() {
      }

      func onPreferenceCenterPurposeLegitimateInterestChanged(purposeId: String, legitInterest: Int8) {
      }

      func onPreferenceCenterPurposeConsentChanged(purposeId: String, consentStatus: Int8) {
      }

      func onShowVendorList() {
      }

      func onHideVendorList() {
      }

      func onVendorListVendorConsentChanged(vendorId: String, consentStatus: Int8) {
      }

      func onVendorListVendorLegitimateInterestChanged(vendorId: String, legitInterest: Int8) {
      }

      func onVendorConfirmChoices() {
      }
  }
```
ObjC:

```
  @interface SceneDelegate : UIResponder <UIWindowSceneDelegate, OTEventListener> {
      - (void)allSDKViewsDismissed:(OTConsentInteractionType)interactionType  {
      }

      - (void)onHideBanner {
      }

      - (void)onShowBanner {
      }

      - (void)onBannerClickedAcceptAll {
      }

      - (void)onBannerClickedRejectAll {
      }

      - (void)onShowPreferenceCenter {
      }

      - (void)onHidePreferenceCenter{
      }

      - (void)onPreferenceCenterPurposeConsentChangedWithPurposeId:(NSString *)purposeId consentStatus:(int8_t)consentStatus {
      }

      - (void)onPreferenceCenterAcceptAll {
      }

      - (void)onPreferenceCenterRejectAll {
      }

      - (void)onPreferenceCenterConfirmChoices{
      }

      - (void)onPreferenceCenterPurposeLegitimateInterestChangedWithPurposeId:(NSString *)purposeId legitInterest:(int8_t)legitInterest {
      }

      - (void)onShowVendorList {
      }

      - (void)onHideVendorList {
      }

      - (void)onVendorConfirmChoices {
      }

      - (void)onVendorListVendorConsentChangedWithVendorId:(NSString *)vendorId consentStatus:(int8_t)consentStatus {
      }

      - (void)onVendorListVendorLegitimateInterestChangedWithVendorId:(NSString *)vendorId legitInterest:(int8_t)legitInterest {
      }
```

Types of Events :
| Event | Description |
| - | - |
| `allSDKViewsDismissed(interactionType(interactionType:)` | Triggered when OT SDK UI is dismissed |
| `onShowBanner()` | Triggered when banner is shown |
| `onHideBanner()` | Triggered when banner icon is tapped and hides the banner from view |
| `onBannerClickedAcceptAll()` | Triggered when user allows all consent from banner.  This also hides the banner from view |
| `onBannerClickedRejectAll()` | Triggered when user rejects all consent from banner.  This also hides the banner from view |
| `onShowPreferenceCenter()` | Triggered when Preference Center is displayed |
| `onHidePreferenceCenter()` | Triggered when Preference Center is closed | 
| `onPreferenceCenterAcceptAll()` | Triggered when user allows all consent from Preference Center.  This also hides the banner from view |
| `onPreferenceCenterRejectAll()` | Triggered when user rejects all consent from Preference Center.  This also hides the banner from view |
| `onPreferenceCenterConfirmChoices()` | Triggered when user clicked on save choices after updating consent values from Preference Center.  This also hides the banner from view |
| `onShowVendorList()` | Triggered when vendor list UI is displayed from an IAB banner/ IAB Preference center |
| `onHideVendorList()` | Triggered when vendor list UI is closed or when back button is clicked |
| `onVendorConfirmChoices()` | Triggered when user updates vendor consent / legitimate interests purpose values and save the choices from vendor list |
| `onVendorListVendorConsentChanged()` | Triggered when user updates consent values for a particular vendor id on vendor list UI |
| `onVendorListVendorLegitimateInterestChanged()` | Triggered when user updates Legitimate interests values for a particular vendor id on vendor list UI |
| `onPreferenceCenterPurposeConsentChanged()` | Triggered when user updates consent values for a particular category on Preference Center UI |
| `onPreferenceCenterPurposeLegitimateInterestChanged()` | Triggered when user updates Legitimate interest values for a particular category on Preference Center UI |

 
## IAB CCPA
### How does IAB CCPA Work? 
The Framework requires participating publishers that choose to sell the personal information of California consumers in the delivery of digital advertising to provide “explicit” notice regarding their rights under the CCPA, to explain in clear terms what will happen to their data, and to notify the downstream technology companies with which the publishers do business that such disclosures were given. 
It also requires publishers to include a “Do Not Sell My Personal Information” link on their digital properties. When a user clicks that link, a signal is sent to the technology companies with which the publishers do business via a technical mechanism that is based upon specifications developed by the IAB Tech Lab. 
Strict rules, which will be effectuated through the Agreement, shall apply after the consumer clicks the link. Not only will the Agreement require the sale of personal information to cease in such instance, but it will cause downstream technology companies to become service providers of the publisher. Doing so imposes strict limitations on data use by publishers and technology companies to only those specific and limited business purposes that are permitted under the CCPA.
Follow this link for more information about IAB CCPA (https://www.iab.com/wp-content/uploads/2019/12/IAB_CCPA-Compliance-Framework-for-Publishers-Technology-Companies.pdf)
Follow this link to sign the Limited Service Provider Agreement (https://www.iabprivacy.com/)
Follow this link for more detailed information on the IAB CCPA Privacy String (https://github.com/InteractiveAdvertisingBureau/USPrivacy/blob/master/CCPA/US Privacy String.md)

### OneTrust Configuration Guidelines
When building your template for CCPA, ensure that you have not enabled “AllowHostOptOut” when configuring your Preference Center. IAB has defined a single flag to represent if the user gave or withdrew consent. This means all sub categories included under Sale of Personal Data must have the same consent value. If you choose to allow users to opt-in / opt-out of these sub groups individually, the OneTrust SDK will use the value of the parent category to set the IAB CCPA consent flag. 

If your organization updates the consent modal being used for CCPA, it is recommended that you request re-consent from users at the time of republishing. Failure to do so can lead to a scenario where the data subject’s consent preferences are overwritten without their knowledge or consent.

### Initialize IAB CCPA
This method informs the OneTrust SDK that your application would like to adhere to the IAB CCPA consent framework. This method MUST be called after initializing the SDK for the first time. Failure to do so will cause the incorrect values to be saved to memory resulting in a non compliant IAB CCPA implementation.

Swift:
```
let gidArray = ["9005", "C0002", "C0001"] 
OTPublishersHeadlessSDK.shared.initializeCCPA(categoryIDs: gidArray, geolocation: .ca, explicitNotice: true, lsPact: true)
```
ObjC:
```
NSArray *gidArray = @[@"9005", @"C0002", @"C0004"];
[OTPublishersHeadlessSDK.shared initializeCCPAWithCategoryIDs:gidArray geolocation: CCPAGeolocationCa explicitNotice:YES lsPact:YES];
```
- **categoryIDs** -  is an Array of Strings that contains the ids of the categories belonging to "Do Not Sell My Personal Information"
- **geolocation** - The geolocation for which IABUSPrivacy_String should be updated. Permissible values are:
 .all = all regions
 .us = US
 .ca = California
- **explicitNotice** -  Boolean value to be passed. Explicit notice been provided as required of the CCPA and the opportunity to opt out of the sale of their data.
- **lsPact** - Boolean value to be passed. Publisher is a signatory to the IAB Limited Service Provider Agreement (LSPA) and the publisher declares that the transaction is covered as a “Covered Opt Out Transaction” or a “Non Opt Out Transaction” as those terms are defined in the Agreement.
Please note that if your application is configured with a single geolocation rule, OneTrust will save and update the IAB CCPA values for every location, regardless of the value provided for geolocation. This is because OneTrust’s SDK does not make a geolocation API call when only one geolocation rule exists and we will be unable to determine which location to apply the IAB CCP updates.

### User Withdraws Consent
This method will update the IAB CCPA Privacy String to indicate the user has opted-out of the sale of personal information. In addition to updating the IAB CCPA Privacy String, it will also update your OneTrust Preference Center so that your app can update any third party vendors, who are not adhering to the IAB CCPA framework, that consent has changed for this user. 

Swift:
`OTPublishersHeadlessSDK.shared.optOutOfSaleOfData()`
ObjC:
`[OTPublishersHeadlessSDK.shared optOutOfSaleOfData];`

### User Provides Consent
This method will update the IAB CCPA Privacy String to indicate the user has opted-in to the sale of personal information. In addition to updating the IAB CCPA Privacy String, it will also update your OneTrust Preference Center so that your app can update any third party vendors, who are not adhering to the IAB CCPA framework, that consent has changed for this user. 

Swift:
`OTPublishersHeadlessSDK.shared.optIntoSaleOfData()`
ObjC:
`[OTPublishersHeadlessSDK.shared optIntoSaleOfData];`

## IAB TCF
### What Is The Transparency & Consent Framework (TCF)?
The TCF’s simple objective is to help all parties in the digital advertising chain ensure that they comply with the EU’s GDPR and ePrivacy Directive when processing personal data or accessing and/or storing information on a user’s device, such as cookies, advertising identifiers, device identifiers and other tracking technologies.

### TCF v2.0
TCF v2.0 enables consumers to grant or withhold consent and also exercise their ‘right to object’ to data being processed. Consumers also gain more control over whether and how vendors may use certain features of data processing, for example, the use of precise geolocation.

Publishers employing TCF v2.0 gain greater control and flexibility with respect to how they integrate and collaborate with their technology partners. New publisher functionality allows them to restrict the purposes for which personal data is processed by vendors on a publisher’s website on a per-vendor basis.

### OneTrust Configuration guidelines
OneTrust helps you to configure the IAB TCF version for your application by building  the IAB template in OneTrust’s environment.

### Accessing IAB TCF data
Once user gives consent, OneTrust retrieve the IAB TCF data and save it to the iOS `standard UserDefaults` based on the IAB version your application is compliant with. Your application can access the data by fetching it using following keys from default UserDefaults.
The TC data values can be retrieved from the application `UserDefaults` by key name using the get API `OTPublishersHeadlessSDK.shared.getValue(forKey:)`. It is recommended to use this API to retrieve the IAB TCF data maintained by OT SDK (instead of directly using UserDefaults API. Although, using UserDefaults API will work as well).
All the keys associated with TC data are available in `OTIABTCFKeys`.

### IAB TCF Keys
| TC string/Key | OneTrust's Constants |
| - | - |
| IABTCF_CmpSdkID | OTIABTCFKeys.iabTcf2CmpSdkId |
| IABTCF_CmpSdkVersion | OTIABTCFKeys.iabTcf2CmpSdkVersion |
| IABTCF_PolicyVersion | OTIABTCFKeys.iabTcf2PolicyVersion |
| IABTCF_gdprApplies | OTIABTCFKeys.iabTcf2GdprApplies |
| IABTCF_PublisherCC | OTIABTCFKeys.iabTcf2PublisherCC |
| IABTCF_PurposeOneTreatment | OTIABTCFKeys.iabTcf2PurposeOneTreatment |
| IABTCF_UseNonStandardStacks | OTIABTCFKeys.iabTcf2UseNonStandardStacks |
| IABTCF_TCString | OTIABTCFKeys.iabTcf2TCString |
| IABTCF_VendorConsents | OTIABTCFKeys.iabTcf2VendorConsents |
| IABTCF_VendorLegitimateInterests | OTIABTCFKeys.iabTcf2VendorLegitimateInterests  |
| IABTCF_PurposeConsents | OTIABTCFKeys.iabTcf2PurposeConsents |
| IABTCF_PurposeLegitimateInterests | OTIABTCFKeys.iabTcf2PurposeLegitimateInterests |
| IABTCF_SpecialFeaturesOptIns | OTIABTCFKeys.iabTcf2SpecialFeaturesOptIns |
| IABTCF_PublisherRestrictions | OTIABTCFKeys.iabTcf2PublisherRestrictions |
| IABTCF_PublisherConsent | OTIABTCFKeys.iabTcf2PublisherConsent |
| IABTCF_PublisherLegitimateInterests | OTIABTCFKeys.iabTcf2PublisherLegitimateInterests |
| IABTCF_PublisherCustomPurposesConsents | OTIABTCFKeys.iabTcf2PublisherCustomPurposesConsents |
| IABTCF_PublisherCustomPurposesLegitimateInterests | OTIABTCFKeys.iabTcf2PublisherCustomPurposesLegitimateInterests |
| IABTCF_AddtlConsent | OTIABTCFKeys.iabTcf2AddtlConsent |

### Sample Code Snipet
Swift:
`var iabTcfValue : Any?
guard let savedValue = OTPublishersHeadlessSDK.shared.getValue(forKey: OTIABTCFKeys.iabTcf2CmpSdkId) else {
    iabTcfValue = ""
    return
 }
 if savedValue is Int {
     iabTcfValue = String(savedValue as! Int)
 } else if savedValue is String {
     iabTcfValue = String(savedValue as! String)
 }`
ObjC:
```
id iabTcfValue;
id savedValue = [OTPublishersHeadlessSDK.shared getValueForKey: OTIABTCFKeys.iabTcf2CmpSdkId];
if (savedValue) {
    iabTcfValue = (NSString *)savedValue;
} else {
    iabTcfValue = @"";
}
```
If the applications want to use UserDefaults APIs directly, they can do that as follows (recommendation from OT SDK is to use the public API provided in `OTPublishersHeadlessSDK` as demonstrated in above example):

Swift:
`var iabTcfValue : Any?
 guard let savedValue = UserDefaults.standard.value(forKey: OTIABTCFKeys.iabTcf2CmpSdkId) else {
   iabTcfValue = ""
   return
 }
 if savedValue is Int {
     iabTcfValue = String(savedValue as! Int)
 } else if savedValue is String {
     iabTcfValue = String(savedValue as! String)
 }`
ObjC:
```
id iabTcfValue;
id savedValue = [NSUserDefaults.standardUserDefaults
valueForKey:OTIABTCFKeys.iabTcf2CmpSdkId];
if (savedValue) {
    iabTcfValue = (NSString *)savedValue;
} else {
    iabTcfValue = @"";
}
```


## OTSDK Errors
OT SDK throws internal errors defined within the SDK in various scenarios. As of today, the errors are categorized into two domains:

 ### ManagerError - Represents the HeadlessSDK manager related errors in OT SDK.
 | Errors Code | Error | Description |
 | - | - | - |
 | 1 | downloadDataConnectivityFailed | Thrown when connectivity issue occurs during OT SDK data download. |
 | 2 | invalidDownloadParameters | Thrown when invalid parameters are passed during OT SDK data download. |
 | 3 | managerDeallocated | Thrown when manager gets deallocated during OT SDK data download. |
 | 4 | invalidDownloadData | Thrown when invalid data is returned from server during OT SDK data download. |
 | 5 | downloadDataParsingFailed | Thrown when data parsing fails during OT SDK data download. |

 ### NetworkError - Represents the network layer related errors in OT SDK.
 | Errors Code | Error | Description |
 | - | - | - | 
 | 31 | invalidDownloadDataURL | Thrown when invalid url exists during OT SDK data download network call. |
 | 32 | invalidGetURL | Thrown when invalid url exists during OT SDK GET network call. |
 | 33 | invalidPostURL | Thrown when invalid url exists during OT SDK POST network call. |
 | 34 | invalidPostBodyData | Thrown when invalid body data exists during OT SDK POST network call. |
 | 35 | maxRetriesReached | Thrown when maximum retry attempts are reached during OT SDK network calls. |
 | 36 | serverCallFailed | Thrown when server throws an error during OT SDK network calls. |
 | 37 | retryCallFailed | Thrown when an error occurs during retry of OT SDK network calls. |
 | 38 | invalidServerResponse | Thrown when invalid server response is received during OT SDK network calls. |

 - Note: Each of the above mentioned errors will also have recovery suggestions associated with them that will be printed whenever an error is thrown.
