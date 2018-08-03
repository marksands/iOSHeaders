//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCSegmentCallHistory : NSObject
{
    int _longTermAdjustmentTBR;
    int _shortTermAdjustmentTBR;
    int _previousISBR;
    int _longTermISBR;
    int _shortTermISBR;
    int _longTermSATXBR;
    int _shortTermSATXBR;
    int _longTermSARBR;
    int _shortTermSARBR;
    int _longTermBWE;
    int _shortTermBWE;
    int _historyLength;
}

+ (int)fieldSize;
@property(readonly) int historyLength; // @synthesize historyLength=_historyLength;
@property(readonly) int shortTermBWE; // @synthesize shortTermBWE=_shortTermBWE;
@property(readonly) int longTermBWE; // @synthesize longTermBWE=_longTermBWE;
@property(readonly) int shortTermSARBR; // @synthesize shortTermSARBR=_shortTermSARBR;
@property(readonly) int longTermSARBR; // @synthesize longTermSARBR=_longTermSARBR;
@property(readonly) int shortTermSATXBR; // @synthesize shortTermSATXBR=_shortTermSATXBR;
@property(readonly) int longTermSATXBR; // @synthesize longTermSATXBR=_longTermSATXBR;
@property(readonly) int shortTermISBR; // @synthesize shortTermISBR=_shortTermISBR;
@property(readonly) int longTermISBR; // @synthesize longTermISBR=_longTermISBR;
@property(readonly) int previousISBR; // @synthesize previousISBR=_previousISBR;
@property(readonly) int longTermAdjustmentTBR; // @synthesize longTermAdjustmentTBR=_longTermAdjustmentTBR;
@property(readonly) int shortTermAdjustmentTBR; // @synthesize shortTermAdjustmentTBR=_shortTermAdjustmentTBR;
- (void)updateSegmentWithTBR:(int)arg1 ISBTR:(int)arg2 SATXBR:(int)arg3 SARBR:(int)arg4 BWE:(int)arg5 shortTermWeight:(double)arg6 longTermWeight:(double)arg7;
- (int)deserialize:(int *)arg1;
- (int)serialize:(int *)arg1;
- (id)init;

@end

