//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TimeSync/TSTimeErrorAnalysis.h>

@class NSArray;

@interface TSTimeDeviationAnalysis : TSTimeErrorAnalysis
{
    double *_tdev;
}

+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)variableName;
- (void)dealloc;
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1;
- (id)tdevFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;
@property(readonly, copy, nonatomic) NSArray *tdev; // @dynamic tdev;
- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (long long)threadingSegment;
- (long long)threadingLimit;
- (long long)analysisLimit;
- (id)initWithTimeErrorValues:(id)arg1;

@end

