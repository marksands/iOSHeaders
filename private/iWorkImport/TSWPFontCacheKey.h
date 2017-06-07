//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPFontCacheKey : NSObject
{
    NSString *_fontName;
    double _fontSize;
    unsigned long long _hash;
}

+ (id)cacheKeyWithFontName:(id)arg1 size:(double)arg2;
@property(readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFontName:(id)arg1 size:(double)arg2;

@end

