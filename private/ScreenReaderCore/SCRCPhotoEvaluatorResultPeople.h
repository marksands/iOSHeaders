//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@class NSArray;

@interface SCRCPhotoEvaluatorResultPeople : SCRCPhotoEvaluatorResult
{
    struct CGSize _imageSize;
    NSArray *_people;
}

@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
- (void).cxx_destruct;
- (id)humanReadableResult;
- (id)initWithPeople:(id)arg1 inImageOfSize:(struct CGSize)arg2;

@end

