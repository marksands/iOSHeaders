//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSCoding>
{
    unsigned long long _shadowFlags;
    struct CGSize _shadowOffset;
    double _shadowBlurRadius;
    NSColor *_shadowColor;
}

+ (id)defaultShadowColor;
+ (id)shadow;
+ (void)initialize;
@property(nonatomic) double shadowBlurRadius; // @synthesize shadowBlurRadius=_shadowBlurRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) id shadowColor;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShadow:(id)arg1;
- (id)init;

@end

