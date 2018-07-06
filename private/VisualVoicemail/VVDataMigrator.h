//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VVDataMigrator : NSObject
{
    NSString *_serviceIdentifier;
    NSString *_searchHint;
    NSString *_isoCountryCode;
}

+ (id)homeDirectory;
+ (id)carrierServiceName;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(copy, nonatomic) NSString *searchHint; // @synthesize searchHint=_searchHint;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (void)performIMAPFilePathMigration;
- (void)performMigrationIfNecessary;
- (void)createFoldersIfNecessary;
- (_Bool)shouldPerformMigration;

@end

