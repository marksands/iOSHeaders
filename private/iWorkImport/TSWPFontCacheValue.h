//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSWPFontCacheValue : NSObject
{
    struct __CTFont *_ctFont;
}

+ (id)cacheValueWithCTFont:(const struct __CTFont *)arg1;
@property(readonly, nonatomic) const struct __CTFont *ctFont; // @synthesize ctFont=_ctFont;
- (id)description;
- (void)dealloc;
- (id)initWithCTFont:(const struct __CTFont *)arg1;

@end

