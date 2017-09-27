//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertController.h"

#import "SKUIArtworkRequestDelegate.h"

@class NSMutableArray, NSString, SKUIResourceLoader, UIImage;

@interface MSCLAuthorSelectionAlertController : UIAlertController <SKUIArtworkRequestDelegate>
{
    NSMutableArray *_artworkNotificationObservers;
    UIImage *_placeholderImage;
    SKUIResourceLoader *_resourceLoader;
}

+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
@property(retain, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
- (void).cxx_destruct;
- (id)_placeholderImage;
- (id)_newArtworkRequestForAuthor:(id)arg1;
- (id)_imageDataConsumer;
- (id)addActionWithAuthor:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

