//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIBarButtonItem, UINavigationItem, UIView;

@interface _UINavigationBarContents : NSObject
{
    UINavigationItem *_topItem;
    UINavigationItem *_backItem;
    NSArray *_viewsRepresentingBackButton;
    UIView *_titleView;
    UIView *_largeTitleView;
    UIView *_promptView;
    UIBarButtonItem *_backBarButtonItem;
    NSArray *_cancelBarButtonItems;
    NSArray *_otherBarButtonItems;
    NSArray *_viewsRepresentingContentBackground;
}

@property(retain, nonatomic) NSArray *viewsRepresentingContentBackground; // @synthesize viewsRepresentingContentBackground=_viewsRepresentingContentBackground;
@property(copy, nonatomic) NSArray *otherBarButtonItems; // @synthesize otherBarButtonItems=_otherBarButtonItems;
@property(copy, nonatomic) NSArray *cancelBarButtonItems; // @synthesize cancelBarButtonItems=_cancelBarButtonItems;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) UIView *promptView; // @synthesize promptView=_promptView;
@property(retain, nonatomic) UIView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSArray *viewsRepresentingBackButton; // @synthesize viewsRepresentingBackButton=_viewsRepresentingBackButton;
@property(retain, nonatomic) UINavigationItem *backItem; // @synthesize backItem=_backItem;
@property(retain, nonatomic) UINavigationItem *topItem; // @synthesize topItem=_topItem;
- (void).cxx_destruct;
- (id)init;

@end

