//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKSQLiteDelegate.h"

__attribute__((visibility("hidden")))
@interface CKPackageDBDelegate : NSObject <CKSQLiteDelegate>
{
}

@property(readonly, nonatomic) int userVersion;
- (_Bool)migrateDatabase:(id)arg1 fromVersion:(int)arg2;

@end

