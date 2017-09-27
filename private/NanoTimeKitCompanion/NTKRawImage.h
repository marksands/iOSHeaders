//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTKRawImage : NSObject
{
    int _width;
    int _height;
    const float *_contents;
}

+ (id)rawImageWithImage:(id)arg1 width:(int)arg2 height:(int)arg3;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) const float *contents; // @synthesize contents=_contents;
- (void)write:(id)arg1;
- (id)scaleToWidth:(int)arg1 height:(int)arg2;
- (void)dealloc;
-     // Error parsing type: @32@0:8^16i24i28, name: initWithContent:width:height:

@end

