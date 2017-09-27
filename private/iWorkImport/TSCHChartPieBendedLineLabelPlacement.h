//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartPieLabelPlacement.h>

__attribute__((visibility("hidden")))
@interface TSCHChartPieBendedLineLabelPlacement : TSCHChartPieLabelPlacement
{
}

- (struct CGPoint)firstHalfOfBendedLineVectorNormalizedWithWedgeLayoutInfo:(id)arg1 shouldBeUpwards:(_Bool)arg2;
- (id)innermostWedgeLayoutInfo:(id)arg1;
- (_Bool)innermostWedgeLayoutInfoWillUsePerpendicularAngle:(id)arg1;
- (_Bool)wedgeLayoutInfoShouldUsePerpendicularAngle:(id)arg1 defaultMidpoint:(struct CGPoint)arg2;
- (struct CGPoint)defaultCalloutLineMidPointForWedgeLayoutInfo:(id)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3;
- (struct CGPoint)calloutLineMidPointForWedgeLayoutInfo:(id)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3;
- (struct CGPoint)calloutLineEndpointForWedgeLayoutInfo:(id)arg1;
- (struct CGPoint)calloutLineStartpointForWedgeLayoutInfo:(id)arg1;
- (id)newCalloutLinePaths:(id)arg1 startLineEnd:(id)arg2 outStartLineEndPath:(id *)arg3 endLineEnd:(id)arg4 outEndLineEndPath:(id *)arg5 stroke:(id)arg6 outStroke:(id *)arg7 context:(struct CGContext *)arg8 contextScale:(float)arg9;
- (id)wedgeLayoutInfosInVerticalHalfDiskWithWedgeLayoutInfos:(id)arg1 verticalHalfDisk:(unsigned long long)arg2;
- (id)wedgeLayoutInfosInHorizontalHalfDiskWithWedgeLayoutInfos:(id)arg1 horizontalHalfDisk:(unsigned long long)arg2;
- (id)wedgeLayoutInfosInOneQuadrant:(id)arg1 verticalHalfDisk:(unsigned long long)arg2 horizontalHalfDisk:(unsigned long long)arg3;
- (id)bottomRightQuadrant;
- (id)bottomLeftQuadrant;
- (id)topRightQuadrant;
- (id)topLeftQuadrant;
- (_Bool)conflictBetweenWedgeLayoutInfo:(id)arg1 nextWedgeLayoutInfo:(id)arg2;
- (id)arrayOfConflictingLabelsWithWedgeLayoutInfosOnOneSide:(id)arg1;
- (_Bool)wedgeLayoutInfoShouldShiftToPreventTooShortCalloutLineFirstHalf:(id)arg1;
- (_Bool)wedgeLayoutInfoShouldShiftToPreventBendPointOnCircumference:(id)arg1;
- (_Bool)wedgeLayoutInfoShouldShiftForCleanUp:(id)arg1 withCleanUpOption:(unsigned long long)arg2;
- (void)shiftLabelsVerticallyInOneQuadrantWithWedgeLayoutInfos:(id)arg1 shiftAmount:(double)arg2 quadrantInHorizontalHalfDisk:(unsigned long long)arg3;
- (id)wedgeLayoutInfosThatNeedShiftingToCleanUpQuadrant:(id)arg1 cleanUpOption:(unsigned long long)arg2;
- (double)amountWedgeLayoutInfoShouldShiftToPreventBendPointOnCircumference:(id)arg1;
- (double)amountWedgeLayoutInfoShouldShiftToPreventShortFirstHalf:(id)arg1;
- (double)amountWedgeLayoutInfoShouldShiftForCleanUp:(id)arg1 withCleanUpOption:(unsigned long long)arg2;
- (double)amountLabelsInQuadrantNeedToShift:(id)arg1 cleanUpOption:(unsigned long long)arg2;
- (void)shiftLabelsVerticallyInQuadrantIfNecessary:(id)arg1 withCleanUpOption:(unsigned long long)arg2;
- (void)shiftLabelsVerticallyToCleanUpPlacementWithCleanUpOption:(unsigned long long)arg1;
- (void)shiftLabelsVerticallyToCleanUpPlacement;
- (double)shiftAmountForWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2 adjacentShouldBeAbove:(_Bool)arg3;
- (double)totalHeightOverlapWithArray:(id)arg1;
- (struct CGAffineTransform)transformToShiftWedgeLayoutInfoAwayFromAdjacentWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2 adjacentShouldBeAbove:(_Bool)arg3 totalHeightOverlap:(double)arg4;
- (void)fixConflictsInOneQuadrantOfPieChartWithArray:(id)arg1 quadrantInHorizontalHalfDisk:(unsigned long long)arg2;
- (void)fixOverlapsOnOneVerticalSideWithConflictingLabelsArray:(id)arg1;
- (void)fixOverlapsWithWedgeLayoutInfos:(id)arg1 inVerticalHalfDisk:(unsigned long long)arg2;
- (void)fixOverlapsOutsideWedges;
- (void)preventOverlapsWithinWedges;
- (id)updateLabelTransformsToPreventOverlap;

@end

