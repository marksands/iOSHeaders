//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@interface TLKStarsView : TLKStackView
{
    double _currentStarRating;
}

+ (id)starImageWithName:(id)arg1;
+ (id)fullStar;
+ (id)halfStar;
+ (id)emptyStar;
@property double currentStarRating; // @synthesize currentStarRating=_currentStarRating;
- (void)updateStarRating:(double)arg1;
- (id)init;

@end

