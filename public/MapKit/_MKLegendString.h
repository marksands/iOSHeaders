//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKLegendString : CALayer
{
    struct __CTLine *_line;
    double _baselineDistanceFromBottom;
    NSAttributedString *_string;
}

@property(readonly, nonatomic) double baselineDistanceFromBottom; // @synthesize baselineDistanceFromBottom=_baselineDistanceFromBottom;
@property(retain, nonatomic) NSAttributedString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)dealloc;
- (id)init;

@end

