//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _SFPBImage;

@protocol _SFPBSportsTeam <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasName;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasAccessibilityDescription;
@property(copy, nonatomic) NSString *accessibilityDescription;
@property(readonly, nonatomic) _Bool hasScore;
@property(copy, nonatomic) NSString *score;
@property(readonly, nonatomic) _Bool hasRecord;
@property(copy, nonatomic) NSString *record;
@property(readonly, nonatomic) _Bool hasLogo;
@property(retain, nonatomic) _SFPBImage *logo;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

