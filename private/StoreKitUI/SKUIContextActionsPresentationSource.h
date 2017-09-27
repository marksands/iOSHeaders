//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIBarButtonItem, UIView, UIViewController;

@interface SKUIContextActionsPresentationSource : NSObject
{
    UIViewController *_viewController;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    struct CGRect _sourceRect;
}

@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)initWithViewController:(id)arg1;

@end

