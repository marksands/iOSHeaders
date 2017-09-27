//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class CALayer, DOMNode, UIWebBrowserView, UIWebOverflowContentView, UIWebOverflowScrollListener;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollView : UIScrollView
{
    _Bool _beingRemoved;
    UIWebBrowserView *_webBrowserView;
    UIWebOverflowScrollListener *_scrollListener;
    UIWebOverflowContentView *_overflowContentView;
    DOMNode *_node;
    CALayer *_webLayer;
}

@property(retain, nonatomic) CALayer *webLayer; // @synthesize webLayer=_webLayer;
@property(nonatomic, getter=isBeingRemoved) _Bool beingRemoved; // @synthesize beingRemoved=_beingRemoved;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
@property(retain, nonatomic) UIWebOverflowContentView *overflowContentView; // @synthesize overflowContentView=_overflowContentView;
@property(retain, nonatomic) UIWebOverflowScrollListener *scrollListener; // @synthesize scrollListener=_scrollListener;
@property(nonatomic) UIWebBrowserView *webBrowserView; // @synthesize webBrowserView=_webBrowserView;
- (void)setContentOffset:(struct CGPoint)arg1;
- (_Bool)fixUpViewAfterInsertion;
- (id)superview;
- (void)willBeRemoved;
- (void)replaceLayer:(id)arg1;
- (void)dealloc;
- (id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3;

@end

