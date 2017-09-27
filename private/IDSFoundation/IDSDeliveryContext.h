//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@interface IDSDeliveryContext : NSObject
{
    NSNumber *_responseCommand;
    NSNumber *_responseTimeStamp;
    long long _responseCode;
    NSError *_responseError;
    NSData *_responseToken;
    NSArray *_displayIDs;
    NSError *_deliveryError;
    long long _idsResponseCode;
    _Bool _lastCall;
    NSString *_deviceID;
    NSNumber *_currentAverageRTT;
    NSNumber *_isDeviceBlackedOut;
    NSNumber *_localMessageState;
    NSNumber *_wpConnectionErrorCode;
    NSDictionary *_wpConnectionErrorUserInfo;
}

@property(copy, nonatomic) NSDictionary *wpConnectionErrorUserInfo; // @synthesize wpConnectionErrorUserInfo=_wpConnectionErrorUserInfo;
@property(copy, nonatomic) NSNumber *wpConnectionErrorCode; // @synthesize wpConnectionErrorCode=_wpConnectionErrorCode;
@property(copy, nonatomic) NSNumber *localMessageState; // @synthesize localMessageState=_localMessageState;
@property(copy, nonatomic) NSNumber *isDeviceBlackedOut; // @synthesize isDeviceBlackedOut=_isDeviceBlackedOut;
@property(copy, nonatomic) NSNumber *currentAverageRTT; // @synthesize currentAverageRTT=_currentAverageRTT;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) _Bool lastCall; // @synthesize lastCall=_lastCall;
@property(nonatomic) long long idsResponseCode; // @synthesize idsResponseCode=_idsResponseCode;
@property(copy, nonatomic) NSArray *displayIDs; // @synthesize displayIDs=_displayIDs;
@property(copy, nonatomic) NSError *deliveryError; // @synthesize deliveryError=_deliveryError;
@property(copy, nonatomic) NSData *responseToken; // @synthesize responseToken=_responseToken;
@property(copy, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(copy, nonatomic) NSNumber *responseTimeStamp; // @synthesize responseTimeStamp=_responseTimeStamp;
@property(copy, nonatomic) NSNumber *responseCommand; // @synthesize responseCommand=_responseCommand;
- (void).cxx_destruct;
- (id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2 currentAverageRTT:(id)arg3 isDeviceBlackedOut:(id)arg4 localMessageState:(id)arg5;
- (id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2;
- (id)initWithResponseCode:(long long)arg1 error:(id)arg2 lastCall:(_Bool)arg3;
- (id)initWithError:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1;

@end

