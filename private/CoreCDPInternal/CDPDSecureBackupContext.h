//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPDCircleJoinResult, CDPDevice, NSString;

@interface CDPDSecureBackupContext : NSObject
{
    _Bool _silentRecovery;
    _Bool _usePreviouslyCachedSecret;
    NSString *_localSecret;
    unsigned long long _localSecretType;
    CDPDevice *_device;
    NSString *_recoverySecret;
    NSString *_recoveryKey;
    CDPDCircleJoinResult *_circleJoinResult;
}

@property(retain, nonatomic) CDPDCircleJoinResult *circleJoinResult; // @synthesize circleJoinResult=_circleJoinResult;
@property(nonatomic) _Bool usePreviouslyCachedSecret; // @synthesize usePreviouslyCachedSecret=_usePreviouslyCachedSecret;
@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(nonatomic) _Bool silentRecovery; // @synthesize silentRecovery=_silentRecovery;
@property(copy, nonatomic) NSString *recoverySecret; // @synthesize recoverySecret=_recoverySecret;
@property(copy, nonatomic) CDPDevice *device; // @synthesize device=_device;
@property(nonatomic) unsigned long long localSecretType; // @synthesize localSecretType=_localSecretType;
@property(copy, nonatomic) NSString *localSecret; // @synthesize localSecret=_localSecret;
- (void).cxx_destruct;

@end

