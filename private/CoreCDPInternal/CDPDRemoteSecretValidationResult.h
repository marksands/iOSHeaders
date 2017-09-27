//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPDevice, NSDictionary, NSString;

@interface CDPDRemoteSecretValidationResult : NSObject
{
    _Bool _userDidCancel;
    _Bool _userDidReset;
    unsigned long long _secretType;
    CDPDevice *_device;
    NSString *_validSecret;
    NSDictionary *_recoveredInfo;
}

@property(copy, nonatomic) NSDictionary *recoveredInfo; // @synthesize recoveredInfo=_recoveredInfo;
@property(copy, nonatomic) NSString *validSecret; // @synthesize validSecret=_validSecret;
@property(copy, nonatomic) CDPDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool userDidReset; // @synthesize userDidReset=_userDidReset;
@property(nonatomic) _Bool userDidCancel; // @synthesize userDidCancel=_userDidCancel;
@property(nonatomic) unsigned long long secretType; // @synthesize secretType=_secretType;
- (void).cxx_destruct;

@end

