//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSPDataMetadataMap : TSPObject
{
    NSMutableDictionary *_identifierToDataMetadata;
}

- (void).cxx_destruct;
- (void)saveToMessage:(struct DataMetadataMap *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromMessage:(const struct DataMetadataMap *)arg1 unarchiver:(id)arg2;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

