//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface FCFeedPersonalizedArticles : NSObject
{
    NSArray *_articlesToShow;
    NSMapTable *_personalizedScores;
    NSMapTable *_agedPersonalizedScores;
}

@property(retain, nonatomic) NSMapTable *agedPersonalizedScores; // @synthesize agedPersonalizedScores=_agedPersonalizedScores;
@property(retain, nonatomic) NSMapTable *personalizedScores; // @synthesize personalizedScores=_personalizedScores;
@property(retain, nonatomic) NSArray *articlesToShow; // @synthesize articlesToShow=_articlesToShow;
- (void).cxx_destruct;

@end
