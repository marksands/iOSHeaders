//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface DMFRequestAirPlayMirroringRequest : CATTaskRequest
{
    NSString *_destinationName;
    NSString *_destinationDeviceID;
    NSString *_password;
    double _scanWaitInterval;
    NSString *_title;
    NSString *_message;
    NSString *_acceptButtonText;
    NSString *_declineButtonText;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSString *declineButtonText; // @synthesize declineButtonText=_declineButtonText;
@property(copy, nonatomic) NSString *acceptButtonText; // @synthesize acceptButtonText=_acceptButtonText;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double scanWaitInterval; // @synthesize scanWaitInterval=_scanWaitInterval;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *destinationDeviceID; // @synthesize destinationDeviceID=_destinationDeviceID;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

