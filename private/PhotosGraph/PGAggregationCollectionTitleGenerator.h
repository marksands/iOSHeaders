//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGDefaultCollectionTitleGenerator.h>

@class NSString;

@interface PGAggregationCollectionTitleGenerator : PGDefaultCollectionTitleGenerator
{
    NSString *_aggregationLabel;
}

@property(readonly, nonatomic) NSString *aggregationLabel; // @synthesize aggregationLabel=_aggregationLabel;
- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollectionNode:(id)arg1 aggregationLabel:(id)arg2;

@end

