//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _CRKCardSectionViewControllerRegistry;

@interface _CRKCardSectionViewControllerFactory : NSObject
{
    _CRKCardSectionViewControllerRegistry *_registry;
}

+ (id)cardSectionViewControllerForCardSection:(id)arg1 dataSource:(id)arg2;
+ (void)registerCardSectionViewControllerClass:(Class)arg1;
+ (id)_sharedInstance;
- (void).cxx_destruct;
- (id)_cardSectionViewControllerForCardSection:(id)arg1 dataSource:(id)arg2;
- (void)_registerCardSectionViewControllerClass:(Class)arg1;
- (id)init;

@end

