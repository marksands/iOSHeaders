//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _SFPBURL;

@protocol _SFPBUserActivityInfo <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasUrlValue;
@property(retain, nonatomic) _SFPBURL *urlValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(copy, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) _Bool hasKey;
@property(copy, nonatomic) NSString *key;
@property(readonly, nonatomic) _Bool hasValueType;
@property(nonatomic) int valueType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

