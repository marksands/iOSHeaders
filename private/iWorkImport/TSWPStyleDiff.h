//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSSStyleDiff.h>

@class TSSStyle, TSSStylePropertyChangeSet;

__attribute__((visibility("hidden")))
@interface TSWPStyleDiff : TSSStyleDiff
{
    TSSStylePropertyChangeSet *_changeSet;
    TSSStyle *_style;
    _Bool _definedChangeSet;
    _Bool _definedStyle;
    TSSStylePropertyChangeSet *_previouslyAppliedChangeSet;
}

@property(retain, nonatomic) TSSStylePropertyChangeSet *previouslyAppliedChangeSet; // @synthesize previouslyAppliedChangeSet=_previouslyAppliedChangeSet;
@property(retain, nonatomic) TSSStylePropertyChangeSet *changeSet; // @synthesize changeSet=_changeSet;
@property(retain, nonatomic) TSSStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToStyleDiff:(id)arg1;
- (id)changedPropertyNames:(id)arg1;
- (id)styleDiffForTable:(int)arg1 storage:(id)arg2 currentObject:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct StyleDiffArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct StyleDiffArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithContext:(id)arg1 changeSet:(id)arg2;
- (id)initWithContext:(id)arg1 style:(id)arg2;
- (void)didInitFromSOS;

@end

