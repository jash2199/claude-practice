# BR Portfolio Builder — Investment Policy Report
**Date: 2026-07-28 (Tuesday, ~16:12 ET)**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. Prior BR report: 2026-07-27 ~16:12 ET (~24 hours stale — BW flagged this explicitly in its 14:42 ET report and asked for a fresh read before tomorrow's FOMC; this is that read). Portfolio figures below are sourced from BW's 7/28 ~14:42 ET live `get_portfolio` read (the most recent available) — I do not have direct Robinhood access; per house rule 4, treat any figure here as one refresh-cycle old and re-verify live before executing anything sizing-relevant.*

---

## TOP OF REPORT — single biggest gap vs. policy

**VXUS is the most underweight line in the book (~16.1% of pool vs. a ~25% core sub-target, a ~8.9pp gap) — narrowly the largest single deviation, just ahead of cash sitting ~8.3pp above its 10% target.** These two gaps are not independent: they are the same unresolved decision. The trader has been holding ~$9 of idle cash specifically to fund the VTI→VXUS rebalance I flagged on 2026-07-23, with an explicit 7/31 time-box I set myself. That time-box is now **3 days out (Friday 7/31)** and — by design, not accident — falls the day after both live binary catalysts (FOMC 7/29, OMCL earnings 7/30) clear. **My policy recommendation: do not act early.** Closing this gap the moment both events resolve is the correct sequencing, not a delay. If 7/31 arrives and the gap is still unresolved, that is the point to force the decision rather than let the time-box lapse silently (per the book's own falsifiable-trigger discipline, rule 7 in Strategy & theories).

Secondary note: VTI alone is 36.1% of pool / 44.3% of equity — 6.1pp over its own 30% sub-target and the largest single position in the book by a wide margin. The VTI→VXUS rebalance addresses both gaps simultaneously: it is a within-core reallocation, not new net core buying.

---

## 1. Recommended allocation vs. current book

Trading-book value (per BW's 7/28 ~14:42 ET read): **pool ≈ $49.11** = equity $40.11 + deployable cash $9.00. (Reserve: a further ~$50 untouchable, per Jash's 7/10 clarification — excluded from all percentages below.)

| Sleeve | Ticker | Role | Target % | Current % | Current $ | Gap |
|---|---|---|---|---|---|---|
| Core | VTI (Vanguard Total Stock Market) | Core — broad US equity | 30% | 36.14% | ~$17.75 | **+6.14pp OVER** |
| Core | VXUS (Vanguard Total International) | Core — ex-US diversifier | 25% | 16.14% | ~$7.93 | **−8.86pp UNDER (largest gap)** |
| Satellite | NVDA | Satellite — single-name AI/semis conviction | 15% (soft cap 18-20%) | 9.96% | ~$4.89 | −5.04pp under (drifted down mechanically on the chip rout, not a decision) |
| Satellite | OMCL | Satellite — healthcare-tech diversifier, half-size | 10% | 9.23% | ~$4.53 | −0.77pp ~on target |
| Satellite | XLE (Energy Select Sector SPDR) | Satellite — energy/oil-cycle diversifier, half-size, day-1 position | 10% | 10.20% | ~$5.01 | +0.20pp ~on target |
| Cash | — | Dry powder / event-window buffer | 10% | 18.33% | ~$9.00 | **+8.33pp OVER (2nd largest gap)** |
| **Total** | | | **100%** | **100%** | **~$49.11** | |

**Core / Satellite / Cash roll-up**: Core 55% target vs. 52.3% actual (−2.7pp); Satellite 35% target vs. 29.4% actual (−5.6pp); Cash 10% target vs. 18.3% actual (+8.3pp). The roll-up understates the real story — within Core, VTI and VXUS are each ~7-9pp off their own sub-targets in opposite directions, which nets out to a small headline Core gap while masking a real concentration issue (see §2).

---

## 2. Core vs. satellite discipline — status check

- **Core (VTI + VXUS, target 55% of pool)**: functioning as designed in aggregate, but internally unbalanced. VTI has absorbed every core dollar deployed since 7/21 (two buys) while VXUS has had exactly one entry (7/16) and not been topped up since — the imbalance is a sequencing artifact of entry-discipline timing (VTI kept being "more underweight" on the days cash was available), not a rejection of VXUS. This is exactly the situation my 7/23 rebalance plan was written for.
- **Satellite (NVDA + OMCL + XLE, target 35% of pool, now three names for the first time)**: this is a genuine structural milestone — as BW noted in its 14:42 ET report, today is the first day this book has held three distinct, largely uncorrelated sector exposures (tech/AI, healthcare, energy) rather than two. All three satellite positions are within or near their individual soft caps; none needs trimming. NVDA's underweight is pure price drift (the chip-sector rout), not a signal — do not chase it back to target by buying into a still-unresolved sector rout (rule 2).
- **Cash (target 10%)**: correctly and deliberately overweight right now. This is not drift, it's policy — BR's own standing plan has been to hold through the FOMC/OMCL window. The overweight should resolve itself the moment the VXUS top-up executes, which is exactly when it's supposed to.

---

## 3. Expected annual return range (historical basis)

| Holding | Basis | Expected range (long-run, annualized) |
|---|---|---|
| VTI | US total-market index, ~97-year S&P-proxy history | ~9-11% nominal, with real bad-decade outcomes as low as 0-4% |
| VXUS | Developed + EM ex-US index | ~6-9% nominal; wider dispersion than VTI, currency-adjusted |
| NVDA | Single-name, AI/semis hypergrowth — MS's own DCF (~$150.6 fair value) implies the stock has been trading well above what a disciplined 11%/3% WACC/g build supports | Historically 25-40%+ CAGR over the past decade; **not a sustainable forward baseline** — treat any single-year projection above ~15-20% as reflecting continued multiple expansion, not base-case fundamentals |
| OMCL | Small/mid-cap healthcare-tech, high earnings-day beta (±15-21% single-day moves per JPM's reaction history) | ~8-15% long-run, with genuine two-sided binary risk around each print |
| XLE | Energy sector basket, oil-cycle-driven | ~5-9% long-run with high cyclical variance; can swing to +30%/-30% single years depending on the commodity cycle |

**Blended portfolio expectation at current weights**: roughly **10-14% annualized** over a full market cycle, with materially more dispersion around that midpoint than a plain 60/40 or all-core portfolio would carry — consistent with the client's stated aggressive risk tolerance, but worth restating plainly: this is a return range with a genuinely fat left tail, not a smooth compounding path.

## 4. Expected maximum drawdown in a bad year

Cross-checked against BW's 7/28 recession stress test (pool-level ~-35.9%, equity-sleeve-only ~-43.9%, both computed at today's live weights): my own independent read, using standard severe-bear-market drawdown assumptions by asset class, lands in the same range. **Policy guidance: in a genuinely bad year (2022-style multiple compression, or worse), expect the equity sleeve to draw down 30-45%, and the pool (including the cash cushion) to draw down 20-30%.** This is within the client's stated aggressive tolerance, but the cash-buffer discipline (holding 10% target dry powder, more during binary-event windows) is precisely the mechanism that keeps the pool-level number meaningfully below the equity-sleeve number — it is doing real work, not just sitting idle.

## 5. Rebalancing schedule and trigger rules

1. **Calendar cadence**: with the book now past its initial four-week buildout phase (five positions live, three satellite slots filled), move from ad hoc/event-driven rebalancing to a **standing bi-weekly allocation check** at a designated Monday-morning run, in addition to any trigger-fired reviews below. This is a lighter cadence than the daily intraday checks other desks run for price/risk purposes — allocation drift doesn't need daily attention, only price/risk does.
2. **Drift trigger**: any single position drifting more than **5pp from its own target %** (not just the sleeve total) flags for review at the next scheduled run — this catches exactly the VTI/VXUS imbalance current allocation shows, which a pure Core-vs-Satellite roll-up would have missed.
3. **Satellite concentration trigger** (existing, unchanged): NVDA (or any single satellite name) crossing ~18-20% of equity forces a mandatory trim review — currently well clear at 12.2%.
4. **Falsifiable-trigger discipline** (existing, unchanged): any open rebalance plan gets a hard time-box up front, honored even under pressure — the VTI→VXUS 7/31 box is the live example; if it fires without execution, that itself becomes the next run's lead item, not a silent extension.
5. **No rebalancing into a live binary catalyst**: do not execute the VXUS top-up, or any other core rebalance, in the window between now and the FOMC (7/29 2pm) or the OMCL print (7/30 pre-open) — consistent with rule 1 (no fresh-catalyst trades) and rule 2 (don't chase/react same-tick).

## 6. Tax efficiency strategy (taxable cash account)

- **Every position in this book is currently short-term** — the oldest holding (NVDA, entered 7/9) is roughly 3 weeks old, nowhere near the 1-year long-term threshold (first eligible: ~2027-07-09). Any gain realized today, on any position, is taxed as ordinary income, not at the more favorable long-term capital-gains rate. This matters most for NVDA and OMCL, the two positions with the widest single-day swings and thus the highest odds of a near-term forced decision.
- **Core sleeve (VTI/VXUS) is inherently tax-efficient by design** — low turnover, qualified dividends, broad diversification reduces the odds of ever needing to sell a single name at an inopportune moment. The buy-and-hold posture already in place for both is correct; no change recommended.
- **Tax-loss harvesting readiness**: if OMCL's 7/30 print triggers a structural-break sell per the contingency plan, or if XLE's oil-cycle thesis breaks down, either would currently be sold at a modest short-term loss — usable to offset any short-term gain elsewhere in the book (e.g., NVDA, if it's ever trimmed on the concentration trigger while still net-positive). Keep this pairing in mind rather than treating each position's tax consequence in isolation.
- **Wash-sale discipline**: if a satellite position is ever sold at a loss, do not re-buy the same ticker within 30 days — a real constraint to keep in mind given how the book's own entry discipline (pullback-only entries) could otherwise tempt a same-week re-entry.
- **Materiality caveat**: at ~$49 deployed, the actual tax dollar impact today is trivial. This section exists to establish the discipline now, before the account scales — the goal per the client profile is compounding into a long-running track record, and tax discipline compounds too.

## 7. Dollar-cost-averaging plan for redeploying profits

1. **Next dollar goes to VXUS**, sized **$5-8** (half-to-full standard tranche, consistent with prior core-sleeve buys), executed at the first scheduled run after both the FOMC (7/29) and OMCL print (7/30) have cleared — realistically the 7/30 afternoon run or the 7/31 open, whichever comes first and shows a non-extended VXUS entry point (rule 2: no chasing a post-FOMC relief rally).
2. **After VXUS closes to within ~2-3pp of its 25% target**, resume the standard "whichever core leg is more underweight" rule for any further core dollars — do not let VTI re-accumulate the same imbalance by defaulting to it out of habit.
3. **Satellite DCA**: no new satellite dollars recommended until NVDA, OMCL, and XLE have each had a full quarter (or one earnings cycle, for OMCL) to establish a track record at current sizing. A fourth satellite slot is not currently recommended — three uncorrelated exposures at half-to-target size is the right amount of satellite diversification for a ~$49 pool; a fourth would push individual position sizes below the point where transaction/spread costs are worth it on this account size.
4. **Cash floor going forward**: once the VXUS top-up executes, target cash should mechanically fall back toward the 10% policy target (~$4-5 at current pool size). Do not let it drift back up passively — if a future run shows cash re-accumulating above ~15% for more than a few cycles with no live binary-event justification, that itself should trigger a fresh deployment review under rule 7's falsifiable-trigger discipline.

## 8. Areas to consider from recent WEF / macro-policy discussion (fresh WebSearch this run)

- **AI capex as a macro force, with real bubble risk flagged even by its proponents.** Davos 2026's Chief Economists' Outlook frames AI capex as now driving growth and productivity broadly, but explicitly flags the "jaw-dropping" ratio of capex to revenue still needing to be created, and names an AI bubble as a live concern, not a fringe one. This directly bears on this book's largest look-through exposure: VTI's own ~42% technology weight plus NVDA's satellite position both sit on the same macro thesis this commentary is warning about. **Policy read: this reinforces, rather than changes, the existing NVDA concentration cap and the "don't chase the AI-capex trade on relief rallies" discipline already in place — it's independent confirmation the caution is well-founded, not a reason to trim further today.**
- **Tariff risk is easing, not worsening.** The 2026 Chief Economists' Outlook found tariff impact milder than feared, aided by an easing of US-China tensions — a mild positive for VXUS's international/EM exposure specifically, and a data point against any defensive de-risking of the international sleeve. This supports, rather than undercuts, closing the VXUS underweight.
- **Sticky core inflation is explicitly flagged as limiting the Fed's flexibility** — directly relevant to tomorrow's FOMC. Multiple sources this run put the no-hike probability at roughly 60-65%, with real dispersion (some reads as low as ~53%, others citing a wide 38-47% hike-odds band) — not a settled consensus. This is a live binary risk, not background noise, and is the correct reason to hold the VXUS rebalance one more day rather than execute it today.
- **A two-speed global recovery** is the Davos frame for 2026 more broadly — some economies/sectors accelerating (AI-linked), others lagging. This is itself an argument *for* maintaining genuine geographic diversification (VXUS) rather than concentrating further in the US/tech-led growth story that VTI and NVDA both already carry meaningful exposure to.

---

## One-page Investment Policy Statement (for the trader to follow)

**Client**: Claude Robinhood Trader experiment. Capital: $50 base + accumulated profits, inside a ~$100 taxable cash account (the ~$50 beyond trading capital is untouchable reserve). Risk tolerance: aggressive. Horizon: short-to-medium, with an explicit goal of compounding into a long-running track record. Universe: equities/ETFs only, no options, fractional shares available.

**Target allocation** (of the ~$49 trading pool): Core 55% (VTI 30% / VXUS 25%) — Satellite 35% (NVDA 15% soft-capped at 18-20%, OMCL 10%, XLE 10%) — Cash 10% (higher during live binary-event windows, by design).

**Standing rules** (see Strategy & theories in state.md for full detail, rules 1-10): no trade without a fresh catalyst; never chase an extended move; diversified-basket buys are exempt from the single-name geopolitical veto; always verify price live via Robinhood before sizing; a DCF "sharply overvalued" call is a hard pass; new ideas need a full cross-vetting cycle before sizing; open theses get a falsifiable trigger with a hard time-box; look-through concentration matters more than headline allocation.

**Current live decision point**: VTI→VXUS rebalance, time-boxed to 2026-07-31, to be executed the first clean (non-chased) opportunity after the FOMC (7/29) and OMCL print (7/30) both clear.

**Review cadence**: bi-weekly standing allocation check, plus trigger-fired reviews on >5pp single-position drift, satellite concentration crossing 18-20%, or any pre-committed time-box reaching its deadline.

---

## Cross-check with other analysts
- **BW (7/28, ~14:42 ET)**: independently identified the same VTI overweight / VXUS underweight and flagged my own staleness directly — this report is the direct response. Confirms XLE's trigger fired cleanly today and that the satellite sleeve crossing from "well short" to "materially closed" is the most structurally positive allocation move the book has made since inception; I concur and elevated it in §2 above.
- **MS (7/28, ~10:13 ET)**: NVDA DCF gap narrowed to ~22.5% overvalued purely on price decline, no fundamental change — supports holding, not adding, NVDA even as it sits underweight vs. target; XLE's composite gap narrowed to ~12.1%, consistent with treating the new position as correctly sized, not in need of an early add.
- **GS (7/28, ~15:45 ET)**: OMCL now #1 "by elimination" with XLE converted to a position; flagged a NVDA WebSearch-vs-Robinhood close-of-day discrepancy worth verifying at the next run but doesn't change this report's allocation-level read.
- **JPM (7/28, ~09:17 ET)**: confirms OMCL (2 days out) and GEHC/PTCT event calendar unchanged; reinforces this report's "don't rebalance into a live binary catalyst" rule 5.

---

Sources:
- [3 things I learned at Davos 2026 on the future of finance (World Economic Forum)](https://www.weforum.org/stories/financial-and-monetary-systems/3-things-i-learned-at-davos-2026-on-the-future-of-finance/)
- [Davos 2026: Leaders Tackle Global Order Challenges (European Business Magazine)](https://europeanbusinessmagazine.com/business/davos-2026-world-leaders-confront-a-fracturing-global-order/)
- [Key Takeaways From Davos 2026 According To Oliver Wyman CEO](https://www.oliverwyman.com/our-expertise/insights/2026/jan/ceo-takeaway-insights-davos-2026.html)
- [Federal Reserve is likely to hold interest rates steady (CNBC, 2026-07-27)](https://www.cnbc.com/2026/07/27/fed-interest-rates-july.html)
- [FOMC Meeting July 28-29: What to Know About Fed Decision Day (CME Group)](https://www.cmelitegroup.com/knowledge-hub/fomc-meeting-fed-decision-day/)
- [What to Expect from the July Fed Meeting (Morningstar)](https://www.morningstar.com/economy/what-expect-july-fed-meeting)
