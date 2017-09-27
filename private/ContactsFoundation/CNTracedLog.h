//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface CNTracedLog : NSObject
{
    NSString *_message;
    NSString *_domain;
    NSString *_domainVersion;
    NSString *_domainScope;
    NSString *_signature;
    NSString *_signature2;
    NSString *_signature3;
    NSString *_value;
    NSString *_value2;
    NSString *_value3;
    NSString *_uuid;
    _Bool _summarize;
    long long _result;
    NSDictionary *_customProperties;
}

+ (_Bool)shouldLogGivenSamplePercentage:(float)arg1;
+ (long long)roundNumber:(long long)arg1 usingSignificantDigits:(unsigned long long)arg2;
+ (id)formatTimeIntervalByRoundingForPrivacy:(double)arg1;
+ (id)formatIntegerByRoundingForPrivacy:(long long)arg1;
+ (id)logWithDomain:(id)arg1;
@property(copy) NSDictionary *customProperties; // @synthesize customProperties=_customProperties;
@property long long result; // @synthesize result=_result;
@property _Bool summarize; // @synthesize summarize=_summarize;
@property(copy) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy) NSString *value3; // @synthesize value3=_value3;
@property(copy) NSString *value2; // @synthesize value2=_value2;
@property(copy) NSString *value; // @synthesize value=_value;
@property(copy) NSString *signature3; // @synthesize signature3=_signature3;
@property(copy) NSString *signature2; // @synthesize signature2=_signature2;
@property(copy) NSString *signature; // @synthesize signature=_signature;
@property(copy) NSString *domainScope; // @synthesize domainScope=_domainScope;
@property(copy) NSString *domainVersion; // @synthesize domainVersion=_domainVersion;
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)resultString;
- (void)sendValue:(id)arg1 forKey:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateCustomKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateStandardKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateStandardizedKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)sendTrace;
- (id)init;
- (id)initWithDomain:(id)arg1 message:(id)arg2;

@end

