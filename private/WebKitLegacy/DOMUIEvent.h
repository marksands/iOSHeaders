//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebKitLegacy/DOMEvent.h>

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent
{
}

- (void)initUIEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 detail:(int)arg5;
@property(readonly) int which;
@property(readonly) int pageY;
@property(readonly) int pageX;
@property(readonly) int layerY;
@property(readonly) int layerX;
@property(readonly) int charCode;
@property(readonly) int keyCode;
@property(readonly) int detail;
@property(readonly) DOMAbstractView *view;
- (void)initUIEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3:(id)arg4:(int)arg5;

@end

