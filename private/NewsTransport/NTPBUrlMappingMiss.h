//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface NTPBUrlMappingMiss : PBCodable <NSCopying>
{
    NSString *_host;
    NSMutableArray *_paths;
    NSString *_url;
}

+ (Class)pathsType;
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)pathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (void)addPaths:(id)arg1;
- (void)clearPaths;
@property(readonly, nonatomic) _Bool hasHost;
@property(readonly, nonatomic) _Bool hasUrl;

@end

