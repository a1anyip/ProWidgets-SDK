//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

@class PWAPINote;

@interface NoteStoreObject : NSObject
@end

@interface PWAPINoteManager : NSObject

+ (NSArray *)allNotes;
+ (PWAPINote *)noteWithId:(NSUInteger)noteId;
+ (void)removeNoteWithId:(NSUInteger)noteId;
+ (void)removeNote:(PWAPINote *)note;

// add a new note
+ (PWAPINote *)addNoteWithContent:(NSString *)content;
+ (PWAPINote *)addNoteWithContent:(NSString *)content creationDate:(NSDate *)creationDate;
+ (PWAPINote *)addNoteWithContent:(NSString *)content creationDate:(NSDate *)creationDate store:(NoteStoreObject *)store;

// retrieve note stores
+ (NSArray *)allStores;
+ (NoteStoreObject *)defaultStore;
+ (NoteStoreObject *)localStore;

@end

@interface PWAPINote : NSObject

@property(nonatomic, readonly) NoteStoreObject *store;
@property(nonatomic, readonly) NSUInteger noteId;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, copy) NSString *content;
@property(nonatomic, retain) NSDate *creationDate;
@property(nonatomic, retain) NSDate *modificationDate;

@end