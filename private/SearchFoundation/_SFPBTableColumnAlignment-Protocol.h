//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@protocol _SFPBTableColumnAlignment <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasIsEqualWidth;
@property(nonatomic) _Bool isEqualWidth;
@property(readonly, nonatomic) _Bool hasDataAlignment;
@property(nonatomic) int dataAlignment;
@property(readonly, nonatomic) _Bool hasColumnAlignment;
@property(nonatomic) int columnAlignment;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

