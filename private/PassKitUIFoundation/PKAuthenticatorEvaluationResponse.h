//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface PKAuthenticatorEvaluationResponse : NSObject
{
    _Bool _biometricMatch;
    long long _result;
    NSData *_credential;
}

+ (id)responseWithResult:(long long)arg1 biometricMatch:(_Bool)arg2 credential:(id)arg3;
+ (id)responseWithResult:(long long)arg1;
@property(readonly, nonatomic) NSData *credential; // @synthesize credential=_credential;
@property(readonly, nonatomic) _Bool biometricMatch; // @synthesize biometricMatch=_biometricMatch;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

