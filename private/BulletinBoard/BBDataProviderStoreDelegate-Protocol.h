//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBDataProvider, BBParentSectionDataProviderFactory;

@protocol BBDataProviderStoreDelegate <NSObject>
- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didRemoveDataProvider:(BBDataProvider *)arg2;
- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didAddDataProvider:(BBDataProvider *)arg2 performMigration:(_Bool)arg3 completion:(void (^)(void))arg4;

@optional
- (void)dataProviderStore:(id <BBDataProviderStore>)arg1 didAddParentSectionFactory:(BBParentSectionDataProviderFactory *)arg2;
@end

