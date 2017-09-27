//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, PKInkBehavior, UIColor;

@interface PKInk : NSObject <NSCopying>
{
    NSString *_identifier;
    UIColor *_color;
    double _widthMultiplier;
    unsigned long long _version;
    PKInkBehavior *_behavior;
}

+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 widthMultiplier:(double)arg3;
+ (id)identifierForCommandType:(unsigned int)arg1 wantsObjectErase:(_Bool)arg2;
+ (unsigned int)commandTypeForIdentifier:(id)arg1 wantsObjectErase:(_Bool)arg2;
@property(retain, nonatomic) PKInkBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) double widthMultiplier; // @synthesize widthMultiplier=_widthMultiplier;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualInk:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *localizedName;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 widthMultiplier:(double)arg4;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3;
- (id)init;
- (void)saveToArchive:(struct Ink *)arg1;
- (id)initWithArchive:(const struct Ink *)arg1;

@end

