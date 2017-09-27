//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, _CPError;

@protocol _CPErrorFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasUnderlyingError;
@property(retain, nonatomic) _CPError *underlyingError;
@property(readonly, nonatomic) _Bool hasError;
@property(retain, nonatomic) _CPError *error;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

