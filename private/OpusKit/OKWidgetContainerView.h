//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OFUIView.h"

@class OKWidgetView;

@interface OKWidgetContainerView : OFUIView
{
    OKWidgetView *_widgetView;
}

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) OKWidgetView *widgetView;
- (void)dealloc;

@end

