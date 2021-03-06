/* Generated by RuntimeBrowser.
 */

@protocol CalDAVCalendar <NSObject>

@required

- (NSSet *)allItemURLs;
- (NSDictionary *)bulkRequests;
- (NSURL *)calendarURL;
- (NSSet *)calendarUserAddresses;
- (BOOL)canBePublished;
- (BOOL)canBeShared;
- (NSString *)color;
- (NSString *)ctag;
- (BOOL)deleteResourcesAtURLs:(NSSet *)arg1;
- (NSDictionary *)etagsForItemURLs:(NSArray *)arg1;
- (NSString *)guid;
- (BOOL)hasCalendarUserAddressEquivalentToURL:(NSURL *)arg1;
- (NSDictionary *)hrefsToModDeleteActions;
- (BOOL)isAffectingAvailability;
- (BOOL)isEditable;
- (BOOL)isEnabled;
- (BOOL)isEventContainer;
- (BOOL)isFamilyCalendar;
- (BOOL)isManagedByServer;
- (BOOL)isMarkedImmutableSharees;
- (BOOL)isMarkedUndeletable;
- (BOOL)isNotification;
- (BOOL)isPoll;
- (BOOL)isPublished;
- (BOOL)isRenameable;
- (BOOL)isScheduleInbox;
- (BOOL)isScheduleOutbox;
- (BOOL)isSubscribed;
- (BOOL)isTaskContainer;
- (BOOL)needsPublishUpdate;
- (BOOL)needsResync;
- (NSString *)notes;
- (int)order;
- (NSURL *)owner;
- (NSString *)ownerDisplayName;
- (NSURL *)prePublishURL;
- (<CalDAVPrincipal> *)principal;
- (NSURL *)publishURL;
- (NSString *)pushKey;
- (void)setBulkRequests:(NSDictionary *)arg1;
- (void)setCalendarURL:(NSURL *)arg1;
- (void)setCalendarUserAddresses:(NSSet *)arg1;
- (void)setCanBePublished:(BOOL)arg1;
- (void)setCanBeShared:(BOOL)arg1;
- (void)setColor:(NSString *)arg1;
- (void)setCtag:(NSString *)arg1;
- (BOOL)setEtag:(NSString *)arg1 forItemAtURL:(NSURL *)arg2;
- (void)setGuid:(NSString *)arg1;
- (void)setIsAffectingAvailability:(BOOL)arg1;
- (void)setIsEditable:(BOOL)arg1;
- (void)setIsEnabled:(BOOL)arg1;
- (void)setIsEventContainer:(BOOL)arg1;
- (void)setIsFamilyCalendar:(BOOL)arg1;
- (void)setIsManagedByServer:(BOOL)arg1;
- (void)setIsMarkedImmutableSharees:(BOOL)arg1;
- (void)setIsMarkedUndeletable:(BOOL)arg1;
- (void)setIsNotification:(BOOL)arg1;
- (void)setIsPoll:(BOOL)arg1;
- (void)setIsPublished:(BOOL)arg1;
- (void)setIsRenameable:(BOOL)arg1;
- (void)setIsScheduleInbox:(BOOL)arg1;
- (void)setIsScheduleOutbox:(BOOL)arg1;
- (void)setIsSubscribed:(BOOL)arg1;
- (void)setIsTaskContainer:(BOOL)arg1;
- (void)setNeedsResync:(BOOL)arg1;
- (void)setNotes:(NSString *)arg1;
- (void)setOrder:(int)arg1;
- (void)setOwner:(NSURL *)arg1;
- (void)setOwnerDisplayName:(NSString *)arg1;
- (void)setPrePublishURL:(NSURL *)arg1;
- (void)setPublishURL:(NSURL *)arg1;
- (void)setPushKey:(NSString *)arg1;
- (BOOL)setScheduleTag:(NSString *)arg1 forItemAtURL:(NSURL *)arg2;
- (void)setSharees:(NSSet *)arg1;
- (void)setSharingStatus:(int)arg1;
- (void)setSymbolicColorName:(NSString *)arg1;
- (void)setSyncToken:(NSString *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;
- (void)setTitle:(NSString *)arg1;
- (BOOL)setURL:(NSURL *)arg1 forResourceWithUUID:(NSString *)arg2;
- (void)setWasModifiedLocally:(BOOL)arg1;
- (NSArray *)shareeActions;
- (NSSet *)sharees;
- (int)sharingStatus;
- (NSString *)symbolicColorName;
- (NSArray *)syncActions;
- (NSString *)syncToken;
- (NSTimeZone *)timeZone;
- (NSString *)title;
- (BOOL)updateResourcesFromServer:(NSSet *)arg1;
- (NSDictionary *)uuidsToAddActions;
- (BOOL)wasModifiedLocally;

@optional

- (Class)appSpecificCalendarItemClass;
- (void)clearShareeActions;
- (void)deleteAction:(CoreDAVAction *)arg1 completedWithError:(NSError *)arg2;
- (void)prepareMergeSyncActionsWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CalDAVCalendar> *, void*
- (void)putAction:(CoreDAVAction *)arg1 completedWithError:(NSError *)arg2;
- (void)syncDidFinishWithError:(NSError *)arg1;

@end
