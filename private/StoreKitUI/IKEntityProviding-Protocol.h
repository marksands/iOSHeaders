//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@protocol IKEntityProviding <NSObject>
- (id <IKEntityValueProviding>)entityValueProviderAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;

@optional
- (unsigned long long)numberOfSections;
@end

