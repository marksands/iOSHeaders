//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _SFPBStringDictionary;

@protocol _SFPBImageOption <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasOptions;
@property(retain, nonatomic) _SFPBStringDictionary *options;
@property(readonly, nonatomic) _Bool hasDefaultValue;
@property(copy, nonatomic) NSString *defaultValue;
@property(readonly, nonatomic) _Bool hasName;
@property(copy, nonatomic) NSString *name;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
