//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NUArticlePageFactory : NSObject
{
    id <NUArticleFactory> _articleFactory;
    id <NUArticleHostViewControllerFactory> _articleHostViewControllerFactory;
    id <NUArticleActivityFactory> _articleActivityFactory;
}

@property(readonly, nonatomic) id <NUArticleActivityFactory> articleActivityFactory; // @synthesize articleActivityFactory=_articleActivityFactory;
@property(readonly, nonatomic) id <NUArticleHostViewControllerFactory> articleHostViewControllerFactory; // @synthesize articleHostViewControllerFactory=_articleHostViewControllerFactory;
@property(readonly, nonatomic) id <NUArticleFactory> articleFactory; // @synthesize articleFactory=_articleFactory;
- (void).cxx_destruct;
- (id)createPagesForArticleIDs:(id)arg1;
- (id)initWithArticleFactory:(id)arg1 articleActivityFactory:(id)arg2 articleHostViewControllerFactory:(id)arg3;

@end

