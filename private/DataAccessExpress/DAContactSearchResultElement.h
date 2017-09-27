//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSData, NSString;

@interface DAContactSearchResultElement : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_workPhone;
    NSString *_mobilePhone;
    NSString *_company;
    NSString *_title;
    NSString *_homePhone;
    NSString *_alias;
    NSString *_office;
    NSString *_serverSource;
    NSString *_recordName;
    NSString *_faxPhone;
    NSString *_department;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    NSString *_country;
    NSData *_jpegPhoto;
    NSString *_imService;
    NSString *_imUsername;
    NSString *_uri;
    NSString *_buildingName;
    NSString *_appleFloor;
    NSString *_pagerNumber;
    NSString *_postalAddress;
    NSString *_homePostalAddress;
    NSString *_principalPath;
    NSString *_preferredUserAddress;
    NSArray *_cuAddresses;
    NSString *_iPhone;
    NSString *_mainPhone;
    NSString *_workFaxPhone;
    NSString *_identifierOnServer;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *identifierOnServer; // @synthesize identifierOnServer=_identifierOnServer;
@property(copy, nonatomic) NSString *workFaxPhone; // @synthesize workFaxPhone=_workFaxPhone;
@property(copy, nonatomic) NSString *mainPhone; // @synthesize mainPhone=_mainPhone;
@property(copy, nonatomic) NSString *iPhone; // @synthesize iPhone=_iPhone;
@property(copy, nonatomic) NSArray *cuAddresses; // @synthesize cuAddresses=_cuAddresses;
@property(copy, nonatomic) NSString *preferredUserAddress; // @synthesize preferredUserAddress=_preferredUserAddress;
@property(copy, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
@property(copy, nonatomic) NSString *homePostalAddress; // @synthesize homePostalAddress=_homePostalAddress;
@property(copy, nonatomic) NSString *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(copy, nonatomic) NSString *pagerNumber; // @synthesize pagerNumber=_pagerNumber;
@property(copy, nonatomic) NSString *appleFloor; // @synthesize appleFloor=_appleFloor;
@property(copy, nonatomic) NSString *buildingName; // @synthesize buildingName=_buildingName;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(copy, nonatomic) NSString *imUsername; // @synthesize imUsername=_imUsername;
@property(copy, nonatomic) NSString *imService; // @synthesize imService=_imService;
@property(copy, nonatomic) NSData *jpegPhoto; // @synthesize jpegPhoto=_jpegPhoto;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *zip; // @synthesize zip=_zip;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *department; // @synthesize department=_department;
@property(copy, nonatomic) NSString *faxPhone; // @synthesize faxPhone=_faxPhone;
@property(copy, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(copy, nonatomic) NSString *serverSource; // @synthesize serverSource=_serverSource;
@property(copy, nonatomic) NSString *office; // @synthesize office=_office;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(copy, nonatomic) NSString *homePhone; // @synthesize homePhone=_homePhone;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *company; // @synthesize company=_company;
@property(copy, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(copy, nonatomic) NSString *workPhone; // @synthesize workPhone=_workPhone;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDAContactSearchResultElement:(id)arg1;
- (id)description;

@end

