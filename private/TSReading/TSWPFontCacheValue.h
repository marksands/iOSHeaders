//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSWPFontCacheValue : NSObject
{
    struct __CTFont *_ctFont;
}

+ (id)cacheValueWithCTFont:(struct __CTFont *)arg1;
@property(readonly, nonatomic) struct __CTFont *ctFont; // @synthesize ctFont=_ctFont;
- (void)dealloc;
- (id)initWithCTFont:(struct __CTFont *)arg1;

@end

