//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSDSwatchRenderingResult : NSObject
{
    struct CGImage *foreground;
    struct CGImage *background;
}

+ (id)renderingResultWithForeground:(struct CGImage *)arg1 background:(struct CGImage *)arg2;
@property(readonly, nonatomic) struct CGImage *background; // @synthesize background;
@property(readonly, nonatomic) struct CGImage *foreground; // @synthesize foreground;
- (void)dealloc;

@end

