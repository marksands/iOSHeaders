//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ADTapGestureRecognizer;

@interface ADDimmerView : UIView
{
    id <ADDimmerViewDelegate> _delegate;
    _Bool _dimmed;
    ADTapGestureRecognizer *_gestureRecognizer;
}

@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(retain, nonatomic) ADTapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)removeADTapGestureRecognizer;
@property(readonly, nonatomic) _Bool enabled;
- (void)_tapRecognized:(id)arg1;
@property(nonatomic) __weak id <ADDimmerViewDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

