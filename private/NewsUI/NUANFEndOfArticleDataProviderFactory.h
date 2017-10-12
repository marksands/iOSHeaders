//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUEndOfArticleDataProviderFactory.h"

@class FCCloudContext, NSString;

@interface NUANFEndOfArticleDataProviderFactory : NSObject <NUEndOfArticleDataProviderFactory>
{
    FCCloudContext *_cloudContext;
    id <NUEmailSubscribeViewControllerFactory> _emailSubscribeViewControllerFactory;
}

@property(readonly, nonatomic) id <NUEmailSubscribeViewControllerFactory> emailSubscribeViewControllerFactory; // @synthesize emailSubscribeViewControllerFactory=_emailSubscribeViewControllerFactory;
@property(readonly, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
- (void).cxx_destruct;
- (id)createEndOfArticleDataProviderWithArticle:(id)arg1;
- (id)initWithCloudContext:(id)arg1 emailSubscribeViewControllerFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
