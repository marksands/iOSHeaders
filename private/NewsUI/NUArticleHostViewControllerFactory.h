//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUArticleHostViewControllerFactory.h"

@class NSString;

@interface NUArticleHostViewControllerFactory : NSObject <NUArticleHostViewControllerFactory>
{
    id <NUArticleViewControllerFactory> _articleViewControllerFactory;
    id <NUSettings> _settings;
    id <NUErrorMessageFactory> _errorMessageFactory;
}

@property(readonly, nonatomic) id <NUErrorMessageFactory> errorMessageFactory; // @synthesize errorMessageFactory=_errorMessageFactory;
@property(readonly, copy, nonatomic) id <NUSettings> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) id <NUArticleViewControllerFactory> articleViewControllerFactory; // @synthesize articleViewControllerFactory=_articleViewControllerFactory;
- (void).cxx_destruct;
- (id)createArticleHostViewControllerForArticle:(id)arg1;
- (id)initWithArticleViewControllerFactory:(id)arg1 settings:(id)arg2 errorMessageFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

