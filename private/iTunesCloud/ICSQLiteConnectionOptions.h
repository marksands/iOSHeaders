//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSString;

@interface ICSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _readOnly;
    NSString *_databasePath;
    long long _cacheSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)applyToDatabase:(struct sqlite3 *)arg1;
- (void)setCacheSizeWithNumberOfKilobytes:(long long)arg1;
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)arg1;
- (id)initWithDatabasePath:(id)arg1;

@end

